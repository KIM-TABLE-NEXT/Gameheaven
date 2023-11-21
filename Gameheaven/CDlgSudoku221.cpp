// CDlgSudoku221.cpp: 구현 파일
//

#include "pch.h"
#include "Gameheaven.h"
#include "afxdialogex.h"
#include "CDlgSudoku221.h"


// CDlgSudoku221 대화 상자

IMPLEMENT_DYNAMIC(CDlgSudoku221, CDialogEx)

CDlgSudoku221::CDlgSudoku221(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_221, pParent)
{
	for (int i = 0; i < 16; i++)
	{
		m_iInput[i] = 0;
	}
}

CDlgSudoku221::~CDlgSudoku221()
{
}

void CDlgSudoku221::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT_221a, m_E1a);
	DDX_Control(pDX, IDC_EDIT_221b, m_E1b);
	DDX_Control(pDX, IDC_EDIT_221c, m_E1c);
	DDX_Control(pDX, IDC_EDIT_221d, m_E1d);
	DDX_Control(pDX, IDC_EDIT_222a, m_E2a);
	DDX_Control(pDX, IDC_EDIT_222b, m_E2b);
	DDX_Control(pDX, IDC_EDIT_223a, m_E3a);
	DDX_Control(pDX, IDC_EDIT_223b, m_E3b);
	DDX_Control(pDX, IDC_EDIT_223c, m_E3c);
	DDX_Control(pDX, IDC_EDIT_223d, m_E3d);
	DDX_Control(pDX, IDC_EDIT_224a, m_E4a);
	DDX_Control(pDX, IDC_EDIT_224b, m_E4b);
	DDX_Control(pDX, IDC_EDIT_224c, m_E4c);
	DDX_Control(pDX, IDC_EDIT_224d, m_E4d);
	DDX_Control(pDX, IDC_EDIT222c, m_E2c);
	DDX_Control(pDX, IDC_EDIT222d, m_E2d);

}


BEGIN_MESSAGE_MAP(CDlgSudoku221, CDialogEx)
	ON_BN_CLICKED(IDOK, &CDlgSudoku221::OnBnClickedOk)
	ON_WM_KEYDOWN()
END_MESSAGE_MAP()


// CDlgSudoku221 메시지 처리기


void CDlgSudoku221::OnBnClickedOk()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CDialogEx::OnOK();
}




void CDlgSudoku221::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.

	CDialogEx::OnKeyDown(nChar, nRepCnt, nFlags);
}
