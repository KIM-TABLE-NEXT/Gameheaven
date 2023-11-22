#pragma once
#include "afxdialogex.h"


// CDlgSudokuLevel 대화 상자

class CDlgSudokuLevel : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgSudokuLevel)

public:
	CDlgSudokuLevel(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CDlgSudokuLevel();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_SUDOKULEVEL };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnClickedButton331();
	afx_msg void OnClickedButton332();
	afx_msg void OnClickedButton221();
};
