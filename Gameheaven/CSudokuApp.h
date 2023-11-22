#pragma once
#include "afxdialogex.h"


// CSudokuApp 대화 상자

class CSudokuApp : public CDialogEx
{
	DECLARE_DYNAMIC(CSudokuApp)

public:
	CSudokuApp(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CSudokuApp();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_331 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
};
