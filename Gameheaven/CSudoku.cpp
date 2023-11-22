// CSudoku.cpp: 구현 파일
//

#include "pch.h"
#include "Gameheaven.h"
#include "afxdialogex.h"
#include "CSudoku.h"


// CSudoku 대화 상자

IMPLEMENT_DYNAMIC(CSudoku, CDialogEx)

CSudoku::CSudoku(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_331, pParent)
{

}

CSudoku::~CSudoku()
{
}

void CSudoku::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CSudoku, CDialogEx)
END_MESSAGE_MAP()


// CSudoku 메시지 처리기
