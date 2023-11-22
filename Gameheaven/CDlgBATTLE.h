#pragma once
#include "afxdialogex.h"


// CDlgBATTLE 대화 상자

class CDlgBATTLE : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgBATTLE)

public:
	CDlgBATTLE(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CDlgBATTLE();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_BATTLE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnAcnStartAnimate2();
	afx_msg void OnStnClickedMypkm();
	afx_msg void OnBnClickedFire();
	afx_msg void OnNMCustomdrawProgress1(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnStnClickedStatic1();
	CProgressCtrl m_MYHP_progress;
	CProgressCtrl m_ENHP_progress;
	afx_msg void OnBnClickedWater();
	afx_msg void OnClickedBodycheck();
	afx_msg void OnBnClickedElectric();
	afx_msg void OnNMCustomdrawMyhp(NMHDR* pNMHDR, LRESULT* pResult);
	CButton m_fire;
	CButton m_electric;
	CButton m_bodycheck;
	CButton m_water;
	BOOL OnInitDialog();
	bool CMYHPprogress();
//	afx_msg void OnDropdownBodycheck(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnBnClickedOk();
	afx_msg void OnPaint();
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	CDC m_MemDC;
	CDC m_cDC;
	CBitmap m_pBackBmp;
};
