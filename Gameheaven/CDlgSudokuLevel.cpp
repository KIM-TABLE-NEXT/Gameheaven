// CDlgSudokuLevel.cpp: 구현 파일
//

#include "pch.h"
#include "Gameheaven.h"
#include "afxdialogex.h"
#include "CDlgSudokuLevel.h"
#include "CDlgSudoku331.h"
#include "MainFrm.h"
#include "ChildFrm.h"
#include "GameheavenDoc.h"
#include "CDlgSudoku332.h"
#include "CDlgSudoku221.h"


// CDlgSudokuLevel 대화 상자

IMPLEMENT_DYNAMIC(CDlgSudokuLevel, CDialogEx)

CDlgSudokuLevel::CDlgSudokuLevel(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_SUDOKULEVEL, pParent)
{

}

CDlgSudokuLevel::~CDlgSudokuLevel()
{
}

void CDlgSudokuLevel::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDlgSudokuLevel, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_331, &CDlgSudokuLevel::OnClickedButton331)
	ON_BN_CLICKED(IDC_BUTTON_332, &CDlgSudokuLevel::OnClickedButton332)
	ON_BN_CLICKED(IDC_BUTTON_221, &CDlgSudokuLevel::OnClickedButton221)
END_MESSAGE_MAP()


// CDlgSudokuLevel 메시지 처리기


void CDlgSudokuLevel::OnClickedButton331()
{
	CDlgSudoku331* pSudoku331 = new CDlgSudoku331;

	if (pSudoku331->DoModal() == IDOK)		// DoModal()함수는 대화상자를 실행시킨다.
	{
		// 인스턴스 얻기
		CMainFrame* pFrame = (CMainFrame*)AfxGetMainWnd();
		CChildFrame* pChild = (CChildFrame*)pFrame->GetActiveFrame();
		CDlgSudokuLevel* pDoc = (CDlgSudokuLevel*)pChild->GetActiveDocument();

		UpdateData(TRUE);				// 데이터를 변수에 저장
		Invalidate();				// 화면 갱신	
	}
}


void CDlgSudokuLevel::OnClickedButton332()
{
	CDlgSudoku332* pSudoku332 = new CDlgSudoku332;

	if (pSudoku332->DoModal() == IDOK)		// DoModal()함수는 대화상자를 실행시킨다.
	{
		// 인스턴스 얻기
		CMainFrame* pFrame = (CMainFrame*)AfxGetMainWnd();
		CChildFrame* pChild = (CChildFrame*)pFrame->GetActiveFrame();
		CDlgSudokuLevel* pDoc = (CDlgSudokuLevel*)pChild->GetActiveDocument();

		UpdateData(TRUE);				// 데이터를 변수에 저장
		Invalidate();				// 화면 갱신	
	}
}



void CDlgSudokuLevel::OnClickedButton221()
{
	CDlgSudoku221* pSudoku221 = new CDlgSudoku221;

	if (pSudoku221->DoModal() == IDOK)		// DoModal()함수는 대화상자를 실행시킨다.
	{
		// 인스턴스 얻기
		CMainFrame* pFrame = (CMainFrame*)AfxGetMainWnd();
		CChildFrame* pChild = (CChildFrame*)pFrame->GetActiveFrame();
		CDlgSudokuLevel* pDoc = (CDlgSudokuLevel*)pChild->GetActiveDocument();

		UpdateData(TRUE);				// 데이터를 변수에 저장
		Invalidate();				// 화면 갱신	
	}
}
