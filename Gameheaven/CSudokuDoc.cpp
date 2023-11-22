// CSudokuDoc.cpp: 구현 파일
//

#include "pch.h"
#include "Gameheaven.h"
#include "afxdialogex.h"
#include "CSudokuDoc.h"


// CSudokuDoc 대화 상자

IMPLEMENT_DYNAMIC(CSudokuDoc, CDialogEx)

CSudokuDoc::CSudokuDoc(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_331, pParent)
{

}

CSudokuDoc::~CSudokuDoc()
{
}

void CSudokuDoc::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CSudokuDoc, CDialogEx)
END_MESSAGE_MAP()


// CSudokuDoc 메시지 처리기
