// CDlgBATTLE.cpp: 구현 파일
//
#include "afxwin.h"
#include "pch.h"
#include "Gameheaven.h"
#include "afxdialogex.h"
#include "CDlgBATTLE.h"
#include "CDlgMain.h"
#include "CDlgMain.h"
#include "MainFrm.h"
#include "ChildFrm.h"
#include "GameheavenDoc.h"


// CDlgBATTLE 대화 상자

IMPLEMENT_DYNAMIC(CDlgBATTLE, CDialogEx)

CDlgBATTLE::CDlgBATTLE(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_BATTLE, pParent)
{

}

CDlgBATTLE::~CDlgBATTLE()
{
}

void CDlgBATTLE::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_MYHP, m_MYHP_progress);
	DDX_Control(pDX, IDC_ENHP, m_ENHP_progress);
	DDX_Control(pDX, IDC_FIRE, m_fire);
	DDX_Control(pDX, IDC_ELECTRIC, m_electric);
	DDX_Control(pDX, IDC_BODYCHECK, m_bodycheck);
	DDX_Control(pDX, IDC_WATER, m_water);
}

void CDlgBATTLE::OnAcnStartAnimate2()
{
}


BEGIN_MESSAGE_MAP(CDlgBATTLE, CDialogEx)
	ON_ACN_START(IDC_MYPKM, &CDlgBATTLE::OnAcnStartAnimate2)
	ON_STN_CLICKED(IDC_MYPKM, &CDlgBATTLE::OnStnClickedMypkm)
	ON_BN_CLICKED(IDC_FIRE, &CDlgBATTLE::OnBnClickedFire)
	ON_NOTIFY(NM_CUSTOMDRAW, IDC_MYHP, &CDlgBATTLE::OnNMCustomdrawProgress1)
	ON_STN_CLICKED(IDC_STATIC1, &CDlgBATTLE::OnStnClickedStatic1)
	ON_BN_CLICKED(IDC_WATER, &CDlgBATTLE::OnBnClickedWater)
	ON_BN_CLICKED(IDC_BODYCHECK, &CDlgBATTLE::OnClickedBodycheck)
	ON_BN_CLICKED(IDC_ELECTRIC, &CDlgBATTLE::OnBnClickedElectric)
	ON_NOTIFY(NM_CUSTOMDRAW, IDC_MYHP, &CDlgBATTLE::OnNMCustomdrawMyhp)
//	ON_NOTIFY(BCN_DROPDOWN, IDC_BODYCHECK, &CDlgBATTLE::OnDropdownBodycheck)
ON_BN_CLICKED(IDOK, &CDlgBATTLE::OnBnClickedOk)
ON_WM_PAINT()
ON_WM_CREATE()
END_MESSAGE_MAP()


// CDlgBATTLE 메시지 처리기





void CDlgBATTLE::OnStnClickedMypkm()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void CDlgBATTLE::OnBnClickedFire()
{
	AfxMessageBox(_T("피카츄는 화염방사를 시전했다\n효과는 미미한것 같다..."), MB_OK | MB_ICONASTERISK);
	int cur_pos = m_ENHP_progress.GetPos();
	int result = m_ENHP_progress.SetPos(cur_pos - 45);
	if (m_ENHP_progress.GetPos() == 0) {
		AfxMessageBox(_T("승리했다"), MB_OK | MB_ICONASTERISK);
		//MessageBox(L"다시 도전하시겠습니까?", L"알림", MB_YESNO | MB_ICONQUESTION);
		if(IDYES== MessageBox(L"다시 도전하시겠습니까?", L"알림", MB_YESNO | MB_ICONQUESTION)){
			m_MYHP_progress.SetRange(0, 1000);
			m_MYHP_progress.SetPos(1000);
			m_ENHP_progress.SetRange(0, 1000);
			m_ENHP_progress.SetPos(1000);
		}
		else {
			CDialogEx::OnOK();
		}
	}
	else {
		srand((int)time(NULL));

		int temp = rand() % 100;	//사용할 스킬 정하기
		if (temp < 10) {
			AfxMessageBox(_T("리자몽은 화염방사를 시전했다"), MB_OK | MB_ICONASTERISK);
			int PK_pos = m_MYHP_progress.GetPos();
			int MY_result = m_MYHP_progress.SetPos(PK_pos - 100);
			if (m_MYHP_progress.GetPos() == 0) {
				AfxMessageBox(_T("패배했다"), MB_OK | MB_ICONASTERISK);
				//MessageBox(L"다시 도전하시겠습니까?", L"알림", MB_YESNO | MB_ICONQUESTION);
				if (IDYES == MessageBox(L"다시 도전하시겠습니까?", L"알림", MB_YESNO | MB_ICONQUESTION)) {
					m_MYHP_progress.SetRange(0, 1000);
					m_MYHP_progress.SetPos(1000);
					m_ENHP_progress.SetRange(0, 1000);
					m_ENHP_progress.SetPos(1000);
				}
				else {
					CDialogEx::OnOK();
				}
			}
		}
		else if (temp < 30) {
			AfxMessageBox(_T("리자몽은 파괴광선을 시전했다\n효과는 굉장했다"), MB_OK | MB_ICONASTERISK);
			int PK_pos = m_MYHP_progress.GetPos();
			int MY_result = m_MYHP_progress.SetPos(PK_pos - 150);
			if (m_MYHP_progress.GetPos() <= 0) {
				AfxMessageBox(_T("패배했다"), MB_OK | MB_ICONASTERISK);
				//MessageBox(L"다시 도전하시겠습니까?", L"알림", MB_YESNO | MB_ICONQUESTION);
				if (IDYES == MessageBox(L"다시 도전하시겠습니까?", L"알림", MB_YESNO | MB_ICONQUESTION)) {
					m_MYHP_progress.SetRange(0, 1000);
					m_MYHP_progress.SetPos(1000);
					m_ENHP_progress.SetRange(0, 1000);
					m_ENHP_progress.SetPos(1000);
				}
				else {
					CDialogEx::OnOK();
				}
			}

		}
		else if (temp < 60) {
			AfxMessageBox(_T("리자몽은 공중날기를 시전했다"), MB_OK | MB_ICONASTERISK);
			int PK_pos = m_MYHP_progress.GetPos();
			int MY_result = m_MYHP_progress.SetPos(PK_pos - 75);
			if (m_MYHP_progress.GetPos() <= 0) {
				AfxMessageBox(_T("패배했다"), MB_OK | MB_ICONASTERISK);
				//MessageBox(L"다시 도전하시겠습니까?", L"알림", MB_YESNO | MB_ICONQUESTION);
				if (IDYES == MessageBox(L"다시 도전하시겠습니까?", L"알림", MB_YESNO | MB_ICONQUESTION)) {
					m_MYHP_progress.SetRange(0, 1000);
					m_MYHP_progress.SetPos(1000);
					m_ENHP_progress.SetRange(0, 1000);
					m_ENHP_progress.SetPos(1000);
				}
				else {
					CDialogEx::OnOK();
				}
			}
		}
		else {
			AfxMessageBox(_T("리자몽은 날개치기를 시전했다\n효과는 미미한것 같다..."), MB_OK | MB_ICONASTERISK);
			int PK_pos = m_MYHP_progress.GetPos();
			int MY_result = m_MYHP_progress.SetPos(PK_pos - 30);
			if (m_MYHP_progress.GetPos() <= 0) {
				AfxMessageBox(_T("패배했다"), MB_OK | MB_ICONASTERISK);
				//MessageBox(L"다시 도전하시겠습니까?", L"알림", MB_YESNO | MB_ICONQUESTION);
				if (IDYES == MessageBox(L"다시 도전하시겠습니까?", L"알림", MB_YESNO | MB_ICONQUESTION)) {
					m_MYHP_progress.SetRange(0, 1000);
					m_MYHP_progress.SetPos(1000);
					m_ENHP_progress.SetRange(0, 1000);
					m_ENHP_progress.SetPos(1000);
				}
				else {
					CDialogEx::OnOK();
				}
			}
		}
	}
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void CDlgBATTLE::OnNMCustomdrawProgress1(NMHDR* pNMHDR, LRESULT* pResult)
{
	LPNMCUSTOMDRAW pNMCD = reinterpret_cast<LPNMCUSTOMDRAW>(pNMHDR);
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	*pResult = 0;
}


void CDlgBATTLE::OnStnClickedStatic1()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void CDlgBATTLE::OnBnClickedWater()
{
	AfxMessageBox(_T("피카츄는 물대포를 시전했다\n효과는 굉장했다"), MB_OK | MB_ICONASTERISK);
	int cur_pos = m_ENHP_progress.GetPos();
	int result = m_ENHP_progress.SetPos(cur_pos - 150);
	if (m_ENHP_progress.GetPos() <= 0) {
		AfxMessageBox(_T("승리했다"), MB_OK | MB_ICONASTERISK);
		//MessageBox(L"다시 도전하시겠습니까?", L"알림", MB_YESNO | MB_ICONQUESTION);
		if (IDYES == MessageBox(L"다시 도전하시겠습니까?", L"알림", MB_YESNO | MB_ICONQUESTION)) {
			m_MYHP_progress.SetRange(0, 1000);
			m_MYHP_progress.SetPos(1000);
			m_ENHP_progress.SetRange(0, 1000);
			m_ENHP_progress.SetPos(1000);
		}
		else {
			CDialogEx::OnOK();
		}
	}
	else {
		srand((int)time(NULL));

		int temp = rand() % 100;	//사용할 스킬 정하기
		if (temp < 10) {
			AfxMessageBox(_T("리자몽은 화염방사를 시전했다"), MB_OK | MB_ICONASTERISK);
			int PK_pos = m_MYHP_progress.GetPos();
			int MY_result = m_MYHP_progress.SetPos(PK_pos - 100);
			if (m_MYHP_progress.GetPos() <= 0) {
				AfxMessageBox(_T("패배했다"), MB_OK | MB_ICONASTERISK);
				//MessageBox(L"다시 도전하시겠습니까?", L"알림", MB_YESNO | MB_ICONQUESTION);
				if (IDYES == MessageBox(L"다시 도전하시겠습니까?", L"알림", MB_YESNO | MB_ICONQUESTION)) {
					m_MYHP_progress.SetRange(0, 1000);
					m_MYHP_progress.SetPos(1000);
					m_ENHP_progress.SetRange(0, 1000);
					m_ENHP_progress.SetPos(1000);
				}
				else {
					CDialogEx::OnOK();
				}
			}
		}
		else if (temp < 30) {
			AfxMessageBox(_T("리자몽은 파괴광선을 시전했다\n효과는 굉장했다."), MB_OK | MB_ICONASTERISK);
			int PK_pos = m_MYHP_progress.GetPos();
			int MY_result = m_MYHP_progress.SetPos(PK_pos - 150);
			if (m_MYHP_progress.GetPos() <= 0) {
				AfxMessageBox(_T("패배했다"), MB_OK | MB_ICONASTERISK);
				//MessageBox(L"다시 도전하시겠습니까?", L"알림", MB_YESNO | MB_ICONQUESTION);
				if (IDYES == MessageBox(L"다시 도전하시겠습니까?", L"알림", MB_YESNO | MB_ICONQUESTION)) {
					m_MYHP_progress.SetRange(0, 1000);
					m_MYHP_progress.SetPos(1000);
					m_ENHP_progress.SetRange(0, 1000);
					m_ENHP_progress.SetPos(1000);
				}
				else {
					CDialogEx::OnOK();
				}
			}
		}
		else if (temp < 60) {
			AfxMessageBox(_T("리자몽은 공중날기를 시전했다"), MB_OK | MB_ICONASTERISK);
			int PK_pos = m_MYHP_progress.GetPos();
			int MY_result = m_MYHP_progress.SetPos(PK_pos - 75);
			if (m_MYHP_progress.GetPos() <= 0) {
				AfxMessageBox(_T("패배했다"), MB_OK | MB_ICONASTERISK);
				//MessageBox(L"다시 도전하시겠습니까?", L"알림", MB_YESNO | MB_ICONQUESTION);
				if (IDYES == MessageBox(L"다시 도전하시겠습니까?", L"알림", MB_YESNO | MB_ICONQUESTION)) {
					m_MYHP_progress.SetRange(0, 1000);
					m_MYHP_progress.SetPos(1000);
					m_ENHP_progress.SetRange(0, 1000);
					m_ENHP_progress.SetPos(1000);
				}
				else {
					CDialogEx::OnOK();
				}
			}
		}
		else {
			AfxMessageBox(_T("리자몽은 날개치기를 시전했다\n효과는 미미한 것 같다...."), MB_OK | MB_ICONASTERISK);
			int PK_pos = m_MYHP_progress.GetPos();
			int MY_result = m_MYHP_progress.SetPos(PK_pos - 30);
			if (m_MYHP_progress.GetPos() <= 0) {
				AfxMessageBox(_T("패배했다"), MB_OK | MB_ICONASTERISK);
				//MessageBox(L"다시 도전하시겠습니까?", L"알림", MB_YESNO | MB_ICONQUESTION);
				if (IDYES == MessageBox(L"다시 도전하시겠습니까?", L"알림", MB_YESNO | MB_ICONQUESTION)) {
					m_MYHP_progress.SetRange(0, 1000);
					m_MYHP_progress.SetPos(1000);
					m_ENHP_progress.SetRange(0, 1000);
					m_ENHP_progress.SetPos(1000);
				}
				else {
					CDialogEx::OnOK();
				}
			}
		}
	}

	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void CDlgBATTLE::OnClickedBodycheck()
{
	
	AfxMessageBox(_T("피카츄는 몸통 박치기를 시전했다"), MB_OK | MB_ICONASTERISK);
	int cur_pos = m_ENHP_progress.GetPos();
	int result = m_ENHP_progress.SetPos(cur_pos - 70);
	if (m_ENHP_progress.GetPos() <= 0) {
		AfxMessageBox(_T("승리했다"), MB_OK | MB_ICONASTERISK);
		//MessageBox(L"다시 도전하시겠습니까?", L"알림", MB_YESNO | MB_ICONQUESTION);
		if (IDYES == MessageBox(L"다시 도전하시겠습니까?", L"알림", MB_YESNO | MB_ICONQUESTION)) {
			m_MYHP_progress.SetRange(0, 1000);
			m_MYHP_progress.SetPos(1000);
			m_ENHP_progress.SetRange(0, 1000);
			m_ENHP_progress.SetPos(1000);
		}
		else {
			CDialogEx::OnOK();
		}
	}
	else {
		srand((int)time(NULL));

		int temp = rand() % 100;	//사용할 스킬 정하기
		if (temp < 10) {
			AfxMessageBox(_T("리자몽은 화염방사를 시전했다"), MB_OK | MB_ICONASTERISK);
			int PK_pos = m_MYHP_progress.GetPos();
			int MY_result = m_MYHP_progress.SetPos(PK_pos - 100);
			if (m_MYHP_progress.GetPos() <= 0) {
				AfxMessageBox(_T("패배했다"), MB_OK | MB_ICONASTERISK);
				//MessageBox(L"다시 도전하시겠습니까?", L"알림", MB_YESNO | MB_ICONQUESTION);
				if (IDYES == MessageBox(L"다시 도전하시겠습니까?", L"알림", MB_YESNO | MB_ICONQUESTION)) {
					m_MYHP_progress.SetRange(0, 1000);
					m_MYHP_progress.SetPos(1000);
					m_ENHP_progress.SetRange(0, 1000);
					m_ENHP_progress.SetPos(1000);
				}
				else {
					CDialogEx::OnOK();
				}
			}
		}
		else if (temp < 30) {
			AfxMessageBox(_T("리자몽은 파괴광선을 시전했다\n효과는 굉장했다!"), MB_OK | MB_ICONASTERISK);
			int PK_pos = m_MYHP_progress.GetPos();
			int MY_result = m_MYHP_progress.SetPos(PK_pos - 150);
			if (m_MYHP_progress.GetPos() <= 0) {
				AfxMessageBox(_T("패배했다"), MB_OK | MB_ICONASTERISK);
				//MessageBox(L"다시 도전하시겠습니까?", L"알림", MB_YESNO | MB_ICONQUESTION);
				if (IDYES == MessageBox(L"다시 도전하시겠습니까?", L"알림", MB_YESNO | MB_ICONQUESTION)) {
					m_MYHP_progress.SetRange(0, 1000);
					m_MYHP_progress.SetPos(1000);
					m_ENHP_progress.SetRange(0, 1000);
					m_ENHP_progress.SetPos(1000);
				}
				else {
					CDialogEx::OnOK();
				}
			}
		}
		else if (temp < 60) {
			AfxMessageBox(_T("리자몽은 공중날기를 시전했다"), MB_OK | MB_ICONASTERISK);
			int PK_pos = m_MYHP_progress.GetPos();
			int MY_result = m_MYHP_progress.SetPos(PK_pos - 75);
			if (m_MYHP_progress.GetPos() <= 0) {
				AfxMessageBox(_T("패배했다"), MB_OK | MB_ICONASTERISK);
				//MessageBox(L"다시 도전하시겠습니까?", L"알림", MB_YESNO | MB_ICONQUESTION);
				if (IDYES == MessageBox(L"다시 도전하시겠습니까?", L"알림", MB_YESNO | MB_ICONQUESTION)) {
					m_MYHP_progress.SetRange(0, 1000);
					m_MYHP_progress.SetPos(1000);
					m_ENHP_progress.SetRange(0, 1000);
					m_ENHP_progress.SetPos(1000);
				}
				else {
					CDialogEx::OnOK();
				}
			}
		}
		else {
			AfxMessageBox(_T("리자몽은 날개치기를 시전했다\n효과는 미미한 것 같다..."), MB_OK | MB_ICONASTERISK);
			int PK_pos = m_MYHP_progress.GetPos();
			int MY_result = m_MYHP_progress.SetPos(PK_pos - 30);
			if (m_MYHP_progress.GetPos() <= 0) {
				AfxMessageBox(_T("패배했다"), MB_OK | MB_ICONASTERISK);
				//MessageBox(L"다시 도전하시겠습니까?", L"알림", MB_YESNO | MB_ICONQUESTION);
				if (IDYES == MessageBox(L"다시 도전하시겠습니까?", L"알림", MB_YESNO | MB_ICONQUESTION)) {
					m_MYHP_progress.SetRange(0, 1000);
					m_MYHP_progress.SetPos(1000);
					m_ENHP_progress.SetRange(0, 1000);
					m_ENHP_progress.SetPos(1000);
				}
				else {
					CDialogEx::OnOK();
				}
			}
		}
	}
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void CDlgBATTLE::OnBnClickedElectric()
{
	AfxMessageBox(_T("피카츄는 백만 볼트를 시전했다"), MB_OK | MB_ICONASTERISK);
	int cur_pos = m_ENHP_progress.GetPos();
	int result = m_ENHP_progress.SetPos(cur_pos - 100);
	if (m_ENHP_progress.GetPos() <= 0) {
		AfxMessageBox(_T("승리했다"), MB_OK | MB_ICONASTERISK);
		//MessageBox(L"다시 도전하시겠습니까?", L"알림", MB_YESNO | MB_ICONQUESTION);
		if (IDYES == MessageBox(L"다시 도전하시겠습니까?", L"알림", MB_YESNO | MB_ICONQUESTION)) {
			m_MYHP_progress.SetRange(0, 1000);
			m_MYHP_progress.SetPos(1000);
			m_ENHP_progress.SetRange(0, 1000);
			m_ENHP_progress.SetPos(1000);
		}
		else {
			CDialogEx::OnOK();
		}
	}
	else {
		srand((int)time(NULL));

		int temp = rand() % 100;	//사용할 스킬 정하기
		if (temp < 10) {
			AfxMessageBox(_T("리자몽은 화염방사를 시전했다"), MB_OK | MB_ICONASTERISK);
			int PK_pos = m_MYHP_progress.GetPos();
			int MY_result = m_MYHP_progress.SetPos(PK_pos - 100);
			if (m_MYHP_progress.GetPos() <= 0) {
				AfxMessageBox(_T("패배했다"), MB_OK | MB_ICONASTERISK);
				//MessageBox(L"다시 도전하시겠습니까?", L"알림", MB_YESNO | MB_ICONQUESTION);
				if (IDYES == MessageBox(L"다시 도전하시겠습니까?", L"알림", MB_YESNO | MB_ICONQUESTION)) {
					m_MYHP_progress.SetRange(0, 1000);
					m_MYHP_progress.SetPos(1000);
					m_ENHP_progress.SetRange(0, 1000);
					m_ENHP_progress.SetPos(1000);
				}
				else {
					CDialogEx::OnOK();
				}
			}
		}
		else if (temp < 30) {
			AfxMessageBox(_T("리자몽은 파괴광선을 시전했다\n효과는 굉장했다!"), MB_OK | MB_ICONASTERISK);
			int PK_pos = m_MYHP_progress.GetPos();
			int MY_result = m_MYHP_progress.SetPos(PK_pos - 150);
			if (m_MYHP_progress.GetPos() <= 0) {
				AfxMessageBox(_T("패배했다"), MB_OK | MB_ICONASTERISK);
				//MessageBox(L"다시 도전하시겠습니까?", L"알림", MB_YESNO | MB_ICONQUESTION);
				if (IDYES == MessageBox(L"다시 도전하시겠습니까?", L"알림", MB_YESNO | MB_ICONQUESTION)) {
					m_MYHP_progress.SetRange(0, 1000);
					m_MYHP_progress.SetPos(1000);
					m_ENHP_progress.SetRange(0, 1000);
					m_ENHP_progress.SetPos(1000);
				}
				else {
					CDialogEx::OnOK();
				}
			}
		}
		else if (temp < 60) {
			AfxMessageBox(_T("리자몽은 공중날기를 시전했다"), MB_OK | MB_ICONASTERISK);
			int PK_pos = m_MYHP_progress.GetPos();
			int MY_result = m_MYHP_progress.SetPos(PK_pos - 75);
			if (m_MYHP_progress.GetPos() <= 0) {
				AfxMessageBox(_T("패배했다"), MB_OK | MB_ICONASTERISK);
				//MessageBox(L"다시 도전하시겠습니까?", L"알림", MB_YESNO | MB_ICONQUESTION);
				if (IDYES == MessageBox(L"다시 도전하시겠습니까?", L"알림", MB_YESNO | MB_ICONQUESTION)) {
					m_MYHP_progress.SetRange(0, 1000);
					m_MYHP_progress.SetPos(1000);
					m_ENHP_progress.SetRange(0, 1000);
					m_ENHP_progress.SetPos(1000);
				}
				else {
					CDialogEx::OnOK();
				}
			}
		}
		else {
			AfxMessageBox(_T("리자몽은 날개치기를 시전했다\n효과는 미미한 것 같다...."), MB_OK | MB_ICONASTERISK);
			int PK_pos = m_MYHP_progress.GetPos();
			int MY_result = m_MYHP_progress.SetPos(PK_pos - 30);
			if (m_MYHP_progress.GetPos() <= 0) {
				AfxMessageBox(_T("패배했다"), MB_OK | MB_ICONASTERISK);
				//MessageBox(L"다시 도전하시겠습니까?", L"알림", MB_YESNO | MB_ICONQUESTION);
				if (IDYES == MessageBox(L"다시 도전하시겠습니까?", L"알림", MB_YESNO | MB_ICONQUESTION)) {
					m_MYHP_progress.SetRange(0, 1000);
					m_MYHP_progress.SetPos(1000);
					m_ENHP_progress.SetRange(0, 1000);
					m_ENHP_progress.SetPos(1000);
				}
				else {
					CDialogEx::OnOK();
				}
			}
		}
	}
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void CDlgBATTLE::OnNMCustomdrawMyhp(NMHDR* pNMHDR, LRESULT* pResult)
{
	LPNMCUSTOMDRAW pNMCD = reinterpret_cast<LPNMCUSTOMDRAW>(pNMHDR);
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	*pResult = 0;
}




BOOL CDlgBATTLE::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Progress Control 초기화
	m_MYHP_progress.SetRange(0, 1000);
	m_MYHP_progress.SetPos(1000);
	m_ENHP_progress.SetRange(0, 1000);
	m_ENHP_progress.SetPos(1000);

	// TODO: 여기에 구현 코드 추가.
	return false;
}

bool CDlgBATTLE::CMYHPprogress()
{
	m_MYHP_progress.SetPos(1000);
	// TODO: 여기에 구현 코드 추가.
	return false;
}





void CDlgBATTLE::OnBnClickedOk()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CDialogEx::OnOK();
}


void CDlgBATTLE::OnPaint()
{

	{ // 그리기를 위한 디바이스 컨텍스트

		CPaintDC dc(this);
		
		CRect rct;
		GetClientRect(&rct);

		int cx = rct.Width(); 
		int cy = rct.Height(); 


		CBitmap resBack;
		CBitmap* old_resBack;
		CDC memDC;
		memDC.CreateCompatibleDC(&dc);
		// Then load the bitmap to the memory.
		
		resBack.LoadBitmapW(IDB_BITMAP5);
		old_resBack = memDC.SelectObject(&resBack);

		// dialog surface.
		dc.BitBlt(0, 0, cx, cy, &memDC, 0, 0, SRCCOPY);
		memDC.SelectObject(old_resBack); 
		resBack.DeleteObject();
		memDC.DeleteDC();

		//CDialogEx::OnPaint();
	}
	//PaintDC dc(this); // device context for painting
	// TODO: 여기에 메시지 처리기 코드를 추가합니다.
	// 그리기 메시지에 대해서는 CDialogEx::OnPaint()을(를) 호출하지 마십시오.
}


int CDlgBATTLE::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CDialogEx::OnCreate(lpCreateStruct) == -1)
		return -1;
	CClientDC cdc(this);
	m_MemDC.CreateCompatibleDC(&cdc);
	m_pBackBmp.LoadBitmapW(IDB_BITMAP5);
	
	// TODO:  여기에 특수화된 작성 코드를 추가합니다.

	return 0;
}
