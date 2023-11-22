// CSudokuApp.cpp: 구현 파일
//

#include "pch.h"
#include "Gameheaven.h"
#include "afxdialogex.h"
#include "CSudokuApp.h"


// CSudokuApp 대화 상자

IMPLEMENT_DYNAMIC(CSudokuApp, CDialogEx)

CSudokuApp::CSudokuApp(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_331, pParent)
{

}

CSudokuApp::~CSudokuApp()
{
}

void CSudokuApp::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CSudokuApp, CDialogEx)
END_MESSAGE_MAP()


// CSudokuApp 메시지 처리기
