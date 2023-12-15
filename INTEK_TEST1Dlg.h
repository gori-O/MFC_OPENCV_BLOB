
// INTEK_TEST1Dlg.h: 헤더 파일
//

#pragma once
#include <opencv2/opencv.hpp>
using namespace cv;

// CINTEKTEST1Dlg 대화 상자
class CINTEKTEST1Dlg : public CDialogEx
{
// 생성입니다.
public:
	CINTEKTEST1Dlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.
public:
	int m_threshold;
	Mat src_img, src_clone_img, img_gray, img_threshold;
	BITMAPINFO* m_pBitmapInfo;

	void CreateBitmapInfo(Mat& img, int w, int h, int bpp);
	void DrawImage(Mat& img);

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_INTEK_TEST1_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CStatic m_Pic;
	CSliderCtrl m_Slider;
	afx_msg void OnCustomdrawSlider1(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	CEdit m_edit_control1;
};
