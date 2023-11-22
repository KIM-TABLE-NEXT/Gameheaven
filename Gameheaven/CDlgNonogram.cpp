// CDlgNonogram.cpp: 구현 파일
//

#include "pch.h"
#include "Gameheaven.h"
#include "afxdialogex.h"
#include "CDlgNonogram.h"


// CDlgNonogram 대화 상자

IMPLEMENT_DYNAMIC(CDlgNonogram, CDialogEx)

CDlgNonogram::CDlgNonogram(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_NONOGRAM, pParent)
{
}

CDlgNonogram::~CDlgNonogram()
{
}

void CDlgNonogram::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_MFCBUTTON_1, m_btn_1);
	DDX_Control(pDX, IDC_MFCBUTTON_10, m_btn_10);
	DDX_Control(pDX, IDC_MFCBUTTON_100, m_btn_100);
	DDX_Control(pDX, IDC_MFCBUTTON_11, m_btn_11);
	DDX_Control(pDX, IDC_MFCBUTTON_12, m_btn_12);
	DDX_Control(pDX, IDC_MFCBUTTON_13, m_btn_13);
	DDX_Control(pDX, IDC_MFCBUTTON_14, m_btn_14);
	DDX_Control(pDX, IDC_MFCBUTTON_15, m_btn_15);
	DDX_Control(pDX, IDC_MFCBUTTON_16, m_btn_16);
	DDX_Control(pDX, IDC_MFCBUTTON_17, m_btn_17);
	DDX_Control(pDX, IDC_MFCBUTTON_18, m_btn_18);
	DDX_Control(pDX, IDC_MFCBUTTON_19, m_btn_19);
	DDX_Control(pDX, IDC_MFCBUTTON_2, m_btn_2);
	DDX_Control(pDX, IDC_MFCBUTTON_20, m_btn_20);
	DDX_Control(pDX, IDC_MFCBUTTON_21, m_btn_21);
	DDX_Control(pDX, IDC_MFCBUTTON_22, m_btn_22);
	DDX_Control(pDX, IDC_MFCBUTTON_23, m_btn_23);
	DDX_Control(pDX, IDC_MFCBUTTON_24, m_btn_24);
	DDX_Control(pDX, IDC_MFCBUTTON_25, m_btn_25);
	DDX_Control(pDX, IDC_MFCBUTTON_26, m_btn_26);
	DDX_Control(pDX, IDC_MFCBUTTON_28, m_btn_28);
	DDX_Control(pDX, IDC_MFCBUTTON_27, m_btn_27);
	DDX_Control(pDX, IDC_MFCBUTTON_29, m_btn_29);
	DDX_Control(pDX, IDC_MFCBUTTON_3, m_btn_3);
	DDX_Control(pDX, IDC_MFCBUTTON_30, m_btn_30);
	DDX_Control(pDX, IDC_MFCBUTTON_31, m_btn_31);
	DDX_Control(pDX, IDC_MFCBUTTON_32, m_btn_32);
	DDX_Control(pDX, IDC_MFCBUTTON_33, m_btn_33);
	DDX_Control(pDX, IDC_MFCBUTTON_35, m_btn_35);
	DDX_Control(pDX, IDC_MFCBUTTON_34, m_btn_34);
	DDX_Control(pDX, IDC_MFCBUTTON_36, m_btn_36);
	DDX_Control(pDX, IDC_MFCBUTTON_37, m_btn_37);
	DDX_Control(pDX, IDC_MFCBUTTON_38, m_btn_38);
	DDX_Control(pDX, IDC_MFCBUTTON_39, m_btn_39);
	DDX_Control(pDX, IDC_MFCBUTTON_4, m_btn_4);
	DDX_Control(pDX, IDC_MFCBUTTON_40, m_btn_40);
	DDX_Control(pDX, IDC_MFCBUTTON_41, m_btn_41);
	DDX_Control(pDX, IDC_MFCBUTTON_42, m_btn_42);
	DDX_Control(pDX, IDC_MFCBUTTON_43, m_btn_43);
	DDX_Control(pDX, IDC_MFCBUTTON_44, m_btn_44);
	DDX_Control(pDX, IDC_MFCBUTTON_45, m_btn_45);
	DDX_Control(pDX, IDC_MFCBUTTON_46, m_btn_46);
	DDX_Control(pDX, IDC_MFCBUTTON_47, m_btn_47);
	DDX_Control(pDX, IDC_MFCBUTTON_48, m_btn_48);
	DDX_Control(pDX, IDC_MFCBUTTON_49, m_btn_49);
	DDX_Control(pDX, IDC_MFCBUTTON_5, m_btn_5);
	DDX_Control(pDX, IDC_MFCBUTTON_50, m_btn_50);
	DDX_Control(pDX, IDC_MFCBUTTON_51, m_btn_51);
	DDX_Control(pDX, IDC_MFCBUTTON_52, m_btn_52);
	DDX_Control(pDX, IDC_MFCBUTTON_53, m_btn_53);
	DDX_Control(pDX, IDC_MFCBUTTON_54, m_btn_54);
	DDX_Control(pDX, IDC_MFCBUTTON_56, m_btn_56);
	DDX_Control(pDX, IDC_MFCBUTTON_55, m_btn_55);
	DDX_Control(pDX, IDC_MFCBUTTON_57, m_btn_57);
	DDX_Control(pDX, IDC_MFCBUTTON_58, m_btn_58);
	DDX_Control(pDX, IDC_MFCBUTTON_59, m_btn_59);
	DDX_Control(pDX, IDC_MFCBUTTON_6, m_btn_6);
	DDX_Control(pDX, IDC_MFCBUTTON_60, m_btn_60);
	DDX_Control(pDX, IDC_MFCBUTTON_61, m_btn_61);
	DDX_Control(pDX, IDC_MFCBUTTON_62, m_btn_62);
	DDX_Control(pDX, IDC_MFCBUTTON_63, m_btn_63);
	DDX_Control(pDX, IDC_MFCBUTTON_64, m_btn_64);
	DDX_Control(pDX, IDC_MFCBUTTON_65, m_btn_65);
	DDX_Control(pDX, IDC_MFCBUTTON_66, m_btn_66);
	DDX_Control(pDX, IDC_MFCBUTTON_67, m_btn_67);
	DDX_Control(pDX, IDC_MFCBUTTON_69, m_btn_69);
	DDX_Control(pDX, IDC_MFCBUTTON_68, m_btn_68);
	DDX_Control(pDX, IDC_MFCBUTTON_7, m_btn_7);
	DDX_Control(pDX, IDC_MFCBUTTON_70, m_btn_70);
	DDX_Control(pDX, IDC_MFCBUTTON_71, m_btn_71);
	DDX_Control(pDX, IDC_MFCBUTTON_72, m_btn_72);
	DDX_Control(pDX, IDC_MFCBUTTON_73, m_btn_73);
	DDX_Control(pDX, IDC_MFCBUTTON_74, m_btn_74);
	DDX_Control(pDX, IDC_MFCBUTTON_75, m_btn_75);
	DDX_Control(pDX, IDC_MFCBUTTON_76, m_btn_76);
	DDX_Control(pDX, IDC_MFCBUTTON_77, m_btn_77);
	DDX_Control(pDX, IDC_MFCBUTTON_78, m_btn_78);
	DDX_Control(pDX, IDC_MFCBUTTON_79, m_btn_79);
	DDX_Control(pDX, IDC_MFCBUTTON_8, m_btn_8);
	DDX_Control(pDX, IDC_MFCBUTTON_80, m_btn_80);
	DDX_Control(pDX, IDC_MFCBUTTON_81, m_btn_81);
	DDX_Control(pDX, IDC_MFCBUTTON_82, m_btn_82);
	DDX_Control(pDX, IDC_MFCBUTTON_83, m_btn_83);
	DDX_Control(pDX, IDC_MFCBUTTON_84, m_btn_84);
	DDX_Control(pDX, IDC_MFCBUTTON_85, m_btn_85);
	DDX_Control(pDX, IDC_MFCBUTTON_86, m_btn_86);
	DDX_Control(pDX, IDC_MFCBUTTON_87, m_btn_87);
	DDX_Control(pDX, IDC_MFCBUTTON_88, m_btn_88);
	DDX_Control(pDX, IDC_MFCBUTTON_89, m_btn_89);
	DDX_Control(pDX, IDC_MFCBUTTON_9, m_btn_9);
	DDX_Control(pDX, IDC_MFCBUTTON_90, m_btn_90);
	DDX_Control(pDX, IDC_MFCBUTTON_91, m_btn_91);
	DDX_Control(pDX, IDC_MFCBUTTON_92, m_btn_92);
	DDX_Control(pDX, IDC_MFCBUTTON_93, m_btn_93);
	DDX_Control(pDX, IDC_MFCBUTTON_94, m_btn_94);
	DDX_Control(pDX, IDC_MFCBUTTON_95, m_btn_95);
	DDX_Control(pDX, IDC_MFCBUTTON_96, m_btn_96);
	DDX_Control(pDX, IDC_MFCBUTTON_97, m_btn_97);
	DDX_Control(pDX, IDC_MFCBUTTON_98, m_btn_98);
	DDX_Control(pDX, IDC_MFCBUTTON_99, m_btn_99);
	DDX_Text(pDX, IDC_EDIT_H1, m_strH[0]);
	DDX_Text(pDX, IDC_EDIT_H2, m_strH[1]);
	DDX_Text(pDX, IDC_EDIT_H3, m_strH[2]);
	DDX_Text(pDX, IDC_EDIT_H4, m_strH[3]);
	DDX_Text(pDX, IDC_EDIT_H5, m_strH[4]);
	DDX_Text(pDX, IDC_EDIT_H6, m_strH[5]);
	DDX_Text(pDX, IDC_EDIT_H7, m_strH[6]);
	DDX_Text(pDX, IDC_EDIT_H8, m_strH[7]);
	DDX_Text(pDX, IDC_EDIT_H9, m_strH[8]);
	DDX_Text(pDX, IDC_EDIT_H10, m_strH[9]);
	DDX_Text(pDX, IDC_EDIT_V1, m_strV[0]);
	DDX_Text(pDX, IDC_EDIT_V2, m_strV[1]);
	DDX_Text(pDX, IDC_EDIT_V3, m_strV[2]);
	DDX_Text(pDX, IDC_EDIT_V4, m_strV[3]);
	DDX_Text(pDX, IDC_EDIT_V5, m_strV[4]);
	DDX_Text(pDX, IDC_EDIT_V6, m_strV[5]);
	DDX_Text(pDX, IDC_EDIT_V7, m_strV[6]);
	DDX_Text(pDX, IDC_EDIT_V8, m_strV[7]);
	DDX_Text(pDX, IDC_EDIT_V9, m_strV[8]);
	DDX_Text(pDX, IDC_EDIT_V10, m_strV[9]);
	DDX_Control(pDX, IDC_BUTTON_HINT, m_btnHint);
	DDX_Control(pDX, IDC_BUTTON_RESET, m_btnReset);
	DDX_Control(pDX, IDC_BUTTON_PREVIOUS, m_btnPrevious);
	DDX_Control(pDX, IDC_BUTTON_NEXT, m_btnNext);
	DDX_Text(pDX, IDC_EDIT_STAGE, m_strStage);
	DDX_Text(pDX, IDC_EDIT_PROGRESS, m_strProgress);

}


BEGIN_MESSAGE_MAP(CDlgNonogram, CDialogEx)

	ON_COMMAND_RANGE(IDC_MFCBUTTON_1, IDC_MFCBUTTON_100, &CDlgNonogram::OnBtnClick)
	ON_BN_CLICKED(IDC_BUTTON_PREVIOUS, &CDlgNonogram::OnClickedButtonPrevious)
	ON_BN_CLICKED(IDC_BUTTON_NEXT, &CDlgNonogram::OnClickedButtonNext)
	ON_BN_CLICKED(IDC_BUTTON_HINT, &CDlgNonogram::OnBnClickedButtonHint)
	ON_BN_CLICKED(IDC_BUTTON_RESET, &CDlgNonogram::OnBnClickedButtonReset)
	ON_WM_ERASEBKGND()
END_MESSAGE_MAP()


// CDlgNonogram 메시지 처리기

BOOL CDlgNonogram::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	CFont m_fontStage;
	m_fontStage.CreatePointFont(150, TEXT("굴림"));
	GetDlgItem(IDC_EDIT_STAGE)->SetFont(&m_fontStage);
	GetDlgItem(IDC_EDIT_PROGRESS)->SetFont(&m_fontStage);
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			m_status[i][j] = 0;

	m_btnHint.SetIcon(AfxGetApp()->LoadIcon(IDI_HINT));
	m_btnReset.SetIcon(AfxGetApp()->LoadIcon(IDI_RESET));
	m_btnPrevious.SetIcon(AfxGetApp()->LoadIcon(IDI_PREVIOUS));
	m_btnNext.SetIcon(AfxGetApp()->LoadIcon(IDI_NEXT));

	m_mapnum = 0;
	m_clear = 0;
	m_correct = 0;
	m_strProgress = "대기중";
	m_strStage.Format(_T("%d / 10\r\n"),m_mapnum+1);
	m_strStage += m_strName[m_mapnum];

	for (int i = 0; i < 10; i++)
		m_strH[i] = m_hintH[m_mapnum][i];
	for (int i = 0; i < 10; i++)
		m_strV[i] = m_hintV[m_mapnum][i];

	UpdateData(FALSE);

	return TRUE;
}

void CDlgNonogram::OnClickedButtonPrevious()
{
	if (m_correct)
		OnBnClickedButtonReset();
	if (m_mapnum != 0)
		m_mapnum--;
	for (int i = 0; i < 10; i++)
		m_strH[i] = m_hintH[m_mapnum][i];
	for (int i = 0; i < 10; i++)
		m_strV[i] = m_hintV[m_mapnum][i];

	m_strStage.Format(_T("%d / 10\r\n"), m_mapnum + 1);
	m_strStage += m_strName[m_mapnum];
	m_strProgress = "대기중";
	UpdateData(FALSE);

}


void CDlgNonogram::OnClickedButtonNext()
{
	if (m_correct)
		OnBnClickedButtonReset();
	if (m_mapnum != 9)
		m_mapnum++;
	for (int i = 0; i < 10; i++)
		m_strH[i] = m_hintH[m_mapnum][i];
	for (int i = 0; i < 10; i++)
		m_strV[i] = m_hintV[m_mapnum][i];

	m_strStage.Format(_T("%d / 10\r\n"), m_mapnum + 1);
	m_strStage += m_strName[m_mapnum];
	m_strProgress = "대기중";
	UpdateData(FALSE);
}

void CDlgNonogram::OnBnClickedButtonReset()
{
	if (IDYES == AfxMessageBox(_T("진행상황이 초기화 됩니다."), MB_YESNO | MB_ICONINFORMATION)) {
		m_correct = 0;
		for (int i = 0; i < 10; i++)
			for (int j = 0; j < 10; j++)
				m_status[i][j] = 0;
		m_btn_1.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_2.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_3.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_4.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_5.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_6.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_7.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_8.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_9.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_10.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_11.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_12.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_13.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_14.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_15.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_16.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_17.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_18.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_19.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_20.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_21.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_22.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_23.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_24.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_25.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_26.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_27.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_28.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_29.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_30.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_31.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_32.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_33.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_34.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_35.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_36.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_37.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_38.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_39.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_40.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_41.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_42.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_43.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_44.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_45.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_46.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_47.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_48.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_49.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_50.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_51.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_52.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_53.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_54.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_55.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_56.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_57.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_58.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_59.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_60.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_61.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_62.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_63.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_64.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_65.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_66.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_67.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_68.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_69.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_70.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_71.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_72.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_73.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_74.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_75.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_76.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_77.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_78.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_79.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_80.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_81.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_82.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_83.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_84.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_85.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_86.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_87.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_88.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_89.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_90.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_91.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_92.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_93.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_94.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_95.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_96.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_97.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_98.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_99.SetFaceColor(RGB(255, 255, 255), true);
		m_btn_100.SetFaceColor(RGB(255, 255, 255), true);
	}
}


void CDlgNonogram::OnBtnClick(UINT uiID) {
	switch (uiID) {
	case IDC_MFCBUTTON_1:
		if (m_status[0][0] != 1) {
			m_btn_1.SetFaceColor(RGB(0, 0, 0), true);
			m_status[0][0] = 1;
		}
		else {
			m_btn_1.SetFaceColor(RGB(255, 255, 255), true);
			m_status[0][0] = 0;
		}
		break;
	case IDC_MFCBUTTON_2:
		if (m_status[0][1] != 1) {
			m_btn_2.SetFaceColor(RGB(0, 0, 0), true);
			m_status[0][1] = 1;
		}
		else {
			m_btn_2.SetFaceColor(RGB(255, 255, 255), true);
			m_status[0][1] = 0;
		}
		break;
	case IDC_MFCBUTTON_3:
		if (m_status[0][2] != 1) {
			m_btn_3.SetFaceColor(RGB(0, 0, 0), true);
			m_status[0][2] = 1;
		}
		else {
			m_btn_3.SetFaceColor(RGB(255, 255, 255), true);
			m_status[0][2] = 0;
		}
		break;
	case IDC_MFCBUTTON_4:
		if (m_status[0][3] != 1) {
			m_btn_4.SetFaceColor(RGB(0, 0, 0), true);
			m_status[0][3] = 1;
		}
		else {
			m_btn_4.SetFaceColor(RGB(255, 255, 255), true);
			m_status[0][3] = 0;
		}
		break;
	case IDC_MFCBUTTON_5:
		if (m_status[0][4] != 1) {
			m_btn_5.SetFaceColor(RGB(0, 0, 0), true);
			m_status[0][4] = 1;
		}
		else {
			m_btn_5.SetFaceColor(RGB(255, 255, 255), true);
			m_status[0][4] = 0;
		}
		break;
	case IDC_MFCBUTTON_6:
		if (m_status[0][5] != 1) {
			m_btn_6.SetFaceColor(RGB(0, 0, 0), true);
			m_status[0][5] = 1;
		}
		else {
			m_btn_6.SetFaceColor(RGB(255, 255, 255), true);
			m_status[0][5] = 0;
		}
		break;
	case IDC_MFCBUTTON_7:
		if (m_status[0][6] != 1) {
			m_btn_7.SetFaceColor(RGB(0, 0, 0), true);
			m_status[0][6] = 1;
		}
		else {
			m_btn_7.SetFaceColor(RGB(255, 255, 255), true);
			m_status[0][6] = 0;
		}
		break;
	case IDC_MFCBUTTON_8:
		if (m_status[0][7] != 1) {
			m_btn_8.SetFaceColor(RGB(0, 0, 0), true);
			m_status[0][7] = 1;
		}
		else {
			m_btn_8.SetFaceColor(RGB(255, 255, 255), true);
			m_status[0][1] = 0;
		}
		break;
	case IDC_MFCBUTTON_9:
		if (m_status[0][8] != 1) {
			m_btn_9.SetFaceColor(RGB(0, 0, 0), true);
			m_status[0][8] = 1;
		}
		else {
			m_btn_9.SetFaceColor(RGB(255, 255, 255), true);
			m_status[0][8] = 0;
		}
		break;
	case IDC_MFCBUTTON_10:
		if (m_status[0][9] != 1) {
			m_btn_10.SetFaceColor(RGB(0, 0, 0), true);
			m_status[0][9] = 1;
		}
		else {
			m_btn_10.SetFaceColor(RGB(255, 255, 255), true);
			m_status[0][9] = 0;
		}
		break;
	case IDC_MFCBUTTON_11:
		if (m_status[1][0] != 1) {
			m_btn_11.SetFaceColor(RGB(0, 0, 0), true);
			m_status[1][0] = 1;
		}
		else {
			m_btn_11.SetFaceColor(RGB(255, 255, 255), true);
			m_status[1][0] = 0;
		}
		break;
	case IDC_MFCBUTTON_12:
		if (m_status[1][1] != 1) {
			m_btn_12.SetFaceColor(RGB(0, 0, 0), true);
			m_status[1][1] = 1;
		}
		else {
			m_btn_12.SetFaceColor(RGB(255, 255, 255), true);
			m_status[1][1] = 0;
		}
		break;
	case IDC_MFCBUTTON_13:
		if (m_status[1][2] != 1) {
			m_btn_13.SetFaceColor(RGB(0, 0, 0), true);
			m_status[1][2] = 1;
		}
		else {
			m_btn_13.SetFaceColor(RGB(255, 255, 255), true);
			m_status[1][2] = 0;
		}
		break;
	case IDC_MFCBUTTON_14:
		if (m_status[1][3] != 1) {
			m_btn_14.SetFaceColor(RGB(0, 0, 0), true);
			m_status[1][3] = 1;
		}
		else {
			m_btn_14.SetFaceColor(RGB(255, 255, 255), true);
			m_status[1][3] = 0;
		}
		break;
	case IDC_MFCBUTTON_15:
		if (m_status[1][4] != 1) {
			m_btn_15.SetFaceColor(RGB(0, 0, 0), true);
			m_status[1][4] = 1;
		}
		else {
			m_btn_15.SetFaceColor(RGB(255, 255, 255), true);
			m_status[1][4] = 0;
		}
		break;
	case IDC_MFCBUTTON_16:
		if (m_status[1][5] != 1) {
			m_btn_16.SetFaceColor(RGB(0, 0, 0), true);
			m_status[1][5] = 1;
		}
		else {
			m_btn_16.SetFaceColor(RGB(255, 255, 255), true);
			m_status[1][5] = 0;
		}
		break;
	case IDC_MFCBUTTON_17:
		if (m_status[1][6] != 1) {
			m_btn_17.SetFaceColor(RGB(0, 0, 0), true);
			m_status[1][6] = 1;
		}
		else {
			m_btn_17.SetFaceColor(RGB(255, 255, 255), true);
			m_status[1][6] = 0;
		}
		break;
	case IDC_MFCBUTTON_18:
		if (m_status[1][7] != 1) {
			m_btn_18.SetFaceColor(RGB(0, 0, 0), true);
			m_status[1][7] = 1;
		}
		else {
			m_btn_18.SetFaceColor(RGB(255, 255, 255), true);
			m_status[1][7] = 0;
		}
		break;
	case IDC_MFCBUTTON_19:
		if (m_status[1][8] != 1) {
			m_btn_19.SetFaceColor(RGB(0, 0, 0), true);
			m_status[1][8] = 1;
		}
		else {
			m_btn_19.SetFaceColor(RGB(255, 255, 255), true);
			m_status[1][8] = 0;
		}
		break;
	case IDC_MFCBUTTON_20:
		if (m_status[1][9] != 1) {
			m_btn_20.SetFaceColor(RGB(0, 0, 0), true);
			m_status[1][9] = 1;
		}
		else {
			m_btn_20.SetFaceColor(RGB(255, 255, 255), true);
			m_status[1][9] = 0;
		}
		break;
	case IDC_MFCBUTTON_21:
		if (m_status[2][0] != 1) {
			m_btn_21.SetFaceColor(RGB(0, 0, 0), true);
			m_status[2][0] = 1;
		}
		else {
			m_btn_21.SetFaceColor(RGB(255, 255, 255), true);
			m_status[2][0] = 0;
		}
		break;
	case IDC_MFCBUTTON_22:
		if (m_status[2][1] != 1) {
			m_btn_22.SetFaceColor(RGB(0, 0, 0), true);
			m_status[2][1] = 1;
		}
		else {
			m_btn_22.SetFaceColor(RGB(255, 255, 255), true);
			m_status[2][1] = 0;
		}
		break;
	case IDC_MFCBUTTON_23:
		if (m_status[2][2] != 1) {
			m_btn_23.SetFaceColor(RGB(0, 0, 0), true);
			m_status[2][2] = 1;
		}
		else {
			m_btn_23.SetFaceColor(RGB(255, 255, 255), true);
			m_status[2][2] = 0;
		}
		break;
	case IDC_MFCBUTTON_24:
		if (m_status[2][3] != 1) {
			m_btn_24.SetFaceColor(RGB(0, 0, 0), true);
			m_status[2][3] = 1;
		}
		else {
			m_btn_24.SetFaceColor(RGB(255, 255, 255), true);
			m_status[2][3] = 0;
		}
		break;
	case IDC_MFCBUTTON_25:
		if (m_status[2][4] != 1) {
			m_btn_25.SetFaceColor(RGB(0, 0, 0), true);
			m_status[2][4] = 1;
		}
		else {
			m_btn_25.SetFaceColor(RGB(255, 255, 255), true);
			m_status[2][4] = 0;
		}
		break;
	case IDC_MFCBUTTON_26:
		if (m_status[2][5] != 1) {
			m_btn_26.SetFaceColor(RGB(0, 0, 0), true);
			m_status[2][5] = 1;
		}
		else {
			m_btn_26.SetFaceColor(RGB(255, 255, 255), true);
			m_status[2][5] = 0;
		}
		break;
	case IDC_MFCBUTTON_27:
		if (m_status[2][6] != 1) {
			m_btn_27.SetFaceColor(RGB(0, 0, 0), true);
			m_status[2][6] = 1;
		}
		else {
			m_btn_27.SetFaceColor(RGB(255, 255, 255), true);
			m_status[2][6] = 0;
		}
		break;
	case IDC_MFCBUTTON_28:
		if (m_status[2][7] != 1) {
			m_btn_28.SetFaceColor(RGB(0, 0, 0), true);
			m_status[2][7] = 1;
		}
		else {
			m_btn_28.SetFaceColor(RGB(255, 255, 255), true);
			m_status[2][7] = 0;
		}
		break;
	case IDC_MFCBUTTON_29:
		if (m_status[2][8] != 1) {
			m_btn_29.SetFaceColor(RGB(0, 0, 0), true);
			m_status[2][8] = 1;
		}
		else {
			m_btn_29.SetFaceColor(RGB(255, 255, 255), true);
			m_status[2][8] = 0;
		}
		break;
	case IDC_MFCBUTTON_30:
		if (m_status[2][9] != 1) {
			m_btn_30.SetFaceColor(RGB(0, 0, 0), true);
			m_status[2][9] = 1;
		}
		else {
			m_btn_30.SetFaceColor(RGB(255, 255, 255), true);
			m_status[2][9] = 0;
		}
		break;
	case IDC_MFCBUTTON_31:
		if (m_status[3][0] != 1) {
			m_btn_31.SetFaceColor(RGB(0, 0, 0), true);
			m_status[3][0] = 1;
		}
		else {
			m_btn_31.SetFaceColor(RGB(255, 255, 255), true);
			m_status[3][0] = 0;
		}
		break;
	case IDC_MFCBUTTON_32:
		if (m_status[3][1] != 1) {
			m_btn_32.SetFaceColor(RGB(0, 0, 0), true);
			m_status[3][1] = 1;
		}
		else {
			m_btn_32.SetFaceColor(RGB(255, 255, 255), true);
			m_status[3][1] = 0;
		}
		break;
	case IDC_MFCBUTTON_33:
		if (m_status[3][2] != 1) {
			m_btn_33.SetFaceColor(RGB(0, 0, 0), true);
			m_status[3][2] = 1;
		}
		else {
			m_btn_33.SetFaceColor(RGB(255, 255, 255), true);
			m_status[3][2] = 0;
		}
		break;
	case IDC_MFCBUTTON_34:
		if (m_status[3][3] != 1) {
			m_btn_34.SetFaceColor(RGB(0, 0, 0), true);
			m_status[3][3] = 1;
		}
		else {
			m_btn_34.SetFaceColor(RGB(255, 255, 255), true);
			m_status[3][3] = 0;
		}
		break;
	case IDC_MFCBUTTON_35:
		if (m_status[3][4] != 1) {
			m_btn_35.SetFaceColor(RGB(0, 0, 0), true);
			m_status[3][4] = 1;
		}
		else {
			m_btn_35.SetFaceColor(RGB(255, 255, 255), true);
			m_status[3][4] = 0;
		}
		break;
	case IDC_MFCBUTTON_36:
		if (m_status[3][5] != 1) {
			m_btn_36.SetFaceColor(RGB(0, 0, 0), true);
			m_status[3][5] = 1;
		}
		else {
			m_btn_36.SetFaceColor(RGB(255, 255, 255), true);
			m_status[3][5] = 0;
		}
		break;
	case IDC_MFCBUTTON_37:
		if (m_status[3][6] != 1) {
			m_btn_37.SetFaceColor(RGB(0, 0, 0), true);
			m_status[3][6] = 1;
		}
		else {
			m_btn_37.SetFaceColor(RGB(255, 255, 255), true);
			m_status[3][6] = 0;
		}
		break;
	case IDC_MFCBUTTON_38:
		if (m_status[3][7] != 1) {
			m_btn_38.SetFaceColor(RGB(0, 0, 0), true);
			m_status[3][7] = 1;
		}
		else {
			m_btn_38.SetFaceColor(RGB(255, 255, 255), true);
			m_status[3][7] = 0;
		}
		break;
	case IDC_MFCBUTTON_39:
		if (m_status[3][8] != 1) {
			m_btn_39.SetFaceColor(RGB(0, 0, 0), true);
			m_status[3][8] = 1;
		}
		else {
			m_btn_39.SetFaceColor(RGB(255, 255, 255), true);
			m_status[3][8] = 0;
		}
		break;
	case IDC_MFCBUTTON_40:
		if (m_status[3][9] != 1) {
			m_btn_40.SetFaceColor(RGB(0, 0, 0), true);
			m_status[3][9] = 1;
		}
		else {
			m_btn_40.SetFaceColor(RGB(255, 255, 255), true);
			m_status[3][9] = 0;
		}
		break;
	case IDC_MFCBUTTON_41:
		if (m_status[4][0] != 1) {
			m_btn_41.SetFaceColor(RGB(0, 0, 0), true);
			m_status[4][0] = 1;
		}
		else {
			m_btn_41.SetFaceColor(RGB(255, 255, 255), true);
			m_status[4][0] = 0;
		}
		break;
	case IDC_MFCBUTTON_42:
		if (m_status[4][1] != 1) {
			m_btn_42.SetFaceColor(RGB(0, 0, 0), true);
			m_status[4][1] = 1;
		}
		else {
			m_btn_42.SetFaceColor(RGB(255, 255, 255), true);
			m_status[4][1] = 0;
		}
		break;
	case IDC_MFCBUTTON_43:
		if (m_status[4][2] != 1) {
			m_btn_43.SetFaceColor(RGB(0, 0, 0), true);
			m_status[4][2] = 1;
		}
		else {
			m_btn_43.SetFaceColor(RGB(255, 255, 255), true);
			m_status[4][2] = 0;
		}
		break;
	case IDC_MFCBUTTON_44:
		if (m_status[4][3] != 1) {
			m_btn_44.SetFaceColor(RGB(0, 0, 0), true);
			m_status[4][3] = 1;
		}
		else {
			m_btn_44.SetFaceColor(RGB(255, 255, 255), true);
			m_status[4][3] = 0;
		}
		break;
	case IDC_MFCBUTTON_45:
		if (m_status[4][4] != 1) {
			m_btn_45.SetFaceColor(RGB(0, 0, 0), true);
			m_status[4][4] = 1;
		}
		else {
			m_btn_45.SetFaceColor(RGB(255, 255, 255), true);
			m_status[4][4] = 0;
		}
		break;
	case IDC_MFCBUTTON_46:
		if (m_status[4][5] != 1) {
			m_btn_46.SetFaceColor(RGB(0, 0, 0), true);
			m_status[4][5] = 1;
		}
		else {
			m_btn_46.SetFaceColor(RGB(255, 255, 255), true);
			m_status[4][5] = 0;
		}
		break;
	case IDC_MFCBUTTON_47:
		if (m_status[4][6] != 1) {
			m_btn_47.SetFaceColor(RGB(0, 0, 0), true);
			m_status[4][6] = 1;
		}
		else {
			m_btn_47.SetFaceColor(RGB(255, 255, 255), true);
			m_status[4][6] = 0;
		}
		break;
	case IDC_MFCBUTTON_48:
		if (m_status[4][7] != 1) {
			m_btn_48.SetFaceColor(RGB(0, 0, 0), true);
			m_status[4][7] = 1;
		}
		else {
			m_btn_48.SetFaceColor(RGB(255, 255, 255), true);
			m_status[4][7] = 0;
		}
		break;
	case IDC_MFCBUTTON_49:
		if (m_status[4][8] != 1) {
			m_btn_49.SetFaceColor(RGB(0, 0, 0), true);
			m_status[4][8] = 1;
		}
		else {
			m_btn_49.SetFaceColor(RGB(255, 255, 255), true);
			m_status[4][8] = 0;
		}
		break;
	case IDC_MFCBUTTON_50:
		if (m_status[4][9] != 1) {
			m_btn_50.SetFaceColor(RGB(0, 0, 0), true);
			m_status[4][9] = 1;
		}
		else {
			m_btn_50.SetFaceColor(RGB(255, 255, 255), true);
			m_status[4][9] = 0;
		}
		break;
	case IDC_MFCBUTTON_51:
		if (m_status[5][0] != 1) {
			m_btn_51.SetFaceColor(RGB(0, 0, 0), true);
			m_status[5][0] = 1;
		}
		else {
			m_btn_51.SetFaceColor(RGB(255, 255, 255), true);
			m_status[5][0] = 0;
		}
		break;
	case IDC_MFCBUTTON_52:
		if (m_status[5][1] != 1) {
			m_btn_52.SetFaceColor(RGB(0, 0, 0), true);
			m_status[5][1] = 1;
		}
		else {
			m_btn_52.SetFaceColor(RGB(255, 255, 255), true);
			m_status[5][1] = 0;
		}
		break;
	case IDC_MFCBUTTON_53:
		if (m_status[5][2] != 1) {
			m_btn_53.SetFaceColor(RGB(0, 0, 0), true);
			m_status[5][2] = 1;
		}
		else {
			m_btn_53.SetFaceColor(RGB(255, 255, 255), true);
			m_status[5][2] = 0;
		}
		break;
	case IDC_MFCBUTTON_54:
		if (m_status[5][3] != 1) {
			m_btn_54.SetFaceColor(RGB(0, 0, 0), true);
			m_status[5][3] = 1;
		}
		else {
			m_btn_54.SetFaceColor(RGB(255, 255, 255), true);
			m_status[5][3] = 0;
		}
		break;
	case IDC_MFCBUTTON_55:
		if (m_status[5][4] != 1) {
			m_btn_55.SetFaceColor(RGB(0, 0, 0), true);
			m_status[5][4] = 1;
		}
		else {
			m_btn_55.SetFaceColor(RGB(255, 255, 255), true);
			m_status[5][4] = 0;
		}
		break;
	case IDC_MFCBUTTON_56:
		if (m_status[5][5] != 1) {
			m_btn_56.SetFaceColor(RGB(0, 0, 0), true);
			m_status[5][5] = 1;
		}
		else {
			m_btn_56.SetFaceColor(RGB(255, 255, 255), true);
			m_status[5][5] = 0;
		}
		break;
	case IDC_MFCBUTTON_57:
		if (m_status[5][6] != 1) {
			m_btn_57.SetFaceColor(RGB(0, 0, 0), true);
			m_status[5][6] = 1;
		}
		else {
			m_btn_57.SetFaceColor(RGB(255, 255, 255), true);
			m_status[5][6] = 0;
		}
		break;
	case IDC_MFCBUTTON_58:
		if (m_status[5][7] != 1) {
			m_btn_58.SetFaceColor(RGB(0, 0, 0), true);
			m_status[5][7] = 1;
		}
		else {
			m_btn_58.SetFaceColor(RGB(255, 255, 255), true);
			m_status[5][7] = 0;
		}
		break;
	case IDC_MFCBUTTON_59:
		if (m_status[5][8] != 1) {
			m_btn_59.SetFaceColor(RGB(0, 0, 0), true);
			m_status[5][8] = 1;
		}
		else {
			m_btn_59.SetFaceColor(RGB(255, 255, 255), true);
			m_status[5][8] = 0;
		}
		break;
	case IDC_MFCBUTTON_60:
		if (m_status[5][9] != 1) {
			m_btn_60.SetFaceColor(RGB(0, 0, 0), true);
			m_status[5][9] = 1;
		}
		else {
			m_btn_60.SetFaceColor(RGB(255, 255, 255), true);
			m_status[5][9] = 0;
		}
		break;
	case IDC_MFCBUTTON_61:
		if (m_status[6][0] != 1) {
			m_btn_61.SetFaceColor(RGB(0, 0, 0), true);
			m_status[6][0] = 1;
		}
		else {
			m_btn_61.SetFaceColor(RGB(255, 255, 255), true);
			m_status[6][0] = 0;
		}
		break;
	case IDC_MFCBUTTON_62:
		if (m_status[6][1] != 1) {
			m_btn_62.SetFaceColor(RGB(0, 0, 0), true);
			m_status[6][1] = 1;
		}
		else {
			m_btn_62.SetFaceColor(RGB(255, 255, 255), true);
			m_status[6][1] = 0;
		}
		break;
	case IDC_MFCBUTTON_63:
		if (m_status[6][2] != 1) {
			m_btn_63.SetFaceColor(RGB(0, 0, 0), true);
			m_status[6][2] = 1;
		}
		else {
			m_btn_63.SetFaceColor(RGB(255, 255, 255), true);
			m_status[6][2] = 0;
		}
		break;
	case IDC_MFCBUTTON_64:
		if (m_status[6][3] != 1) {
			m_btn_64.SetFaceColor(RGB(0, 0, 0), true);
			m_status[6][3] = 1;
		}
		else {
			m_btn_64.SetFaceColor(RGB(255, 255, 255), true);
			m_status[6][3] = 0;
		}
		break;
	case IDC_MFCBUTTON_65:
		if (m_status[6][4] != 1) {
			m_btn_65.SetFaceColor(RGB(0, 0, 0), true);
			m_status[6][4] = 1;
		}
		else {
			m_btn_65.SetFaceColor(RGB(255, 255, 255), true);
			m_status[6][4] = 0;
		}
		break;
	case IDC_MFCBUTTON_66:
		if (m_status[6][5] != 1) {
			m_btn_66.SetFaceColor(RGB(0, 0, 0), true);
			m_status[6][5] = 1;
		}
		else {
			m_btn_66.SetFaceColor(RGB(255, 255, 255), true);
			m_status[6][5] = 0;
		}
		break;
	case IDC_MFCBUTTON_67:
		if (m_status[6][6] != 1) {
			m_btn_67.SetFaceColor(RGB(0, 0, 0), true);
			m_status[6][6] = 1;
		}
		else {
			m_btn_67.SetFaceColor(RGB(255, 255, 255), true);
			m_status[6][6] = 0;
		}
		break;
	case IDC_MFCBUTTON_68:
		if (m_status[6][7] != 1) {
			m_btn_68.SetFaceColor(RGB(0, 0, 0), true);
			m_status[6][7] = 1;
		}
		else {
			m_btn_68.SetFaceColor(RGB(255, 255, 255), true);
			m_status[6][7] = 0;
		}
		break;
	case IDC_MFCBUTTON_69:
		if (m_status[6][8] != 1) {
			m_btn_69.SetFaceColor(RGB(0, 0, 0), true);
			m_status[6][8] = 1;
		}
		else {
			m_btn_69.SetFaceColor(RGB(255, 255, 255), true);
			m_status[6][8] = 0;
		}
		break;
	case IDC_MFCBUTTON_70:
		if (m_status[6][9] != 1) {
			m_btn_70.SetFaceColor(RGB(0, 0, 0), true);
			m_status[6][9] = 1;
		}
		else {
			m_btn_70.SetFaceColor(RGB(255, 255, 255), true);
			m_status[6][9] = 0;
		}
		break;
	case IDC_MFCBUTTON_71:
		if (m_status[7][0] != 1) {
			m_btn_71.SetFaceColor(RGB(0, 0, 0), true);
			m_status[7][0] = 1;
		}
		else {
			m_btn_71.SetFaceColor(RGB(255, 255, 255), true);
			m_status[7][0] = 0;
		}
		break;
	case IDC_MFCBUTTON_72:
		if (m_status[7][1] != 1) {
			m_btn_72.SetFaceColor(RGB(0, 0, 0), true);
			m_status[7][1] = 1;
		}
		else {
			m_btn_72.SetFaceColor(RGB(255, 255, 255), true);
			m_status[7][1] = 0;
		}
		break;
	case IDC_MFCBUTTON_73:
		if (m_status[7][2] != 1) {
			m_btn_73.SetFaceColor(RGB(0, 0, 0), true);
			m_status[7][2] = 1;
		}
		else {
			m_btn_73.SetFaceColor(RGB(255, 255, 255), true);
			m_status[7][2] = 0;
		}
		break;
	case IDC_MFCBUTTON_74:
		if (m_status[7][3] != 1) {
			m_btn_74.SetFaceColor(RGB(0, 0, 0), true);
			m_status[7][3] = 1;
		}
		else {
			m_btn_74.SetFaceColor(RGB(255, 255, 255), true);
			m_status[7][3] = 0;
		}
		break;
	case IDC_MFCBUTTON_75:
		if (m_status[7][4] != 1) {
			m_btn_75.SetFaceColor(RGB(0, 0, 0), true);
			m_status[7][4] = 1;
		}
		else {
			m_btn_75.SetFaceColor(RGB(255, 255, 255), true);
			m_status[7][4] = 0;
		}
		break;
	case IDC_MFCBUTTON_76:
		if (m_status[7][5] != 1) {
			m_btn_76.SetFaceColor(RGB(0, 0, 0), true);
			m_status[7][5] = 1;
		}
		else {
			m_btn_76.SetFaceColor(RGB(255, 255, 255), true);
			m_status[7][5] = 0;
		}
		break;
	case IDC_MFCBUTTON_77:
		if (m_status[7][6] != 1) {
			m_btn_77.SetFaceColor(RGB(0, 0, 0), true);
			m_status[7][6] = 1;
		}
		else {
			m_btn_77.SetFaceColor(RGB(255, 255, 255), true);
			m_status[7][6] = 0;
		}
		break;
	case IDC_MFCBUTTON_78:
		if (m_status[7][7] != 1) {
			m_btn_78.SetFaceColor(RGB(0, 0, 0), true);
			m_status[7][7] = 1;
		}
		else {
			m_btn_78.SetFaceColor(RGB(255, 255, 255), true);
			m_status[7][7] = 0;
		}
		break;
	case IDC_MFCBUTTON_79:
		if (m_status[7][8] != 1) {
			m_btn_79.SetFaceColor(RGB(0, 0, 0), true);
			m_status[7][8] = 1;
		}
		else {
			m_btn_79.SetFaceColor(RGB(255, 255, 255), true);
			m_status[7][8] = 0;
		}
		break;
	case IDC_MFCBUTTON_80:
		if (m_status[7][9] != 1) {
			m_btn_80.SetFaceColor(RGB(0, 0, 0), true);
			m_status[7][9] = 1;
		}
		else {
			m_btn_80.SetFaceColor(RGB(255, 255, 255), true);
			m_status[7][9] = 0;
		}
		break;
	case IDC_MFCBUTTON_81:
		if (m_status[8][0] != 1) {
			m_btn_81.SetFaceColor(RGB(0, 0, 0), true);
			m_status[8][0] = 1;
		}
		else {
			m_btn_81.SetFaceColor(RGB(255, 255, 255), true);
			m_status[8][0] = 0;
		}
		break;
	case IDC_MFCBUTTON_82:
		if (m_status[8][1] != 1) {
			m_btn_82.SetFaceColor(RGB(0, 0, 0), true);
			m_status[8][1] = 1;
		}
		else {
			m_btn_82.SetFaceColor(RGB(255, 255, 255), true);
			m_status[8][1] = 0;
		}
		break;
	case IDC_MFCBUTTON_83:
		if (m_status[8][2] != 1) {
			m_btn_83.SetFaceColor(RGB(0, 0, 0), true);
			m_status[8][2] = 1;
		}
		else {
			m_btn_83.SetFaceColor(RGB(255, 255, 255), true);
			m_status[8][2] = 0;
		}
		break;
	case IDC_MFCBUTTON_84:
		if (m_status[8][3] != 1) {
			m_btn_84.SetFaceColor(RGB(0, 0, 0), true);
			m_status[8][3] = 1;
		}
		else {
			m_btn_84.SetFaceColor(RGB(255, 255, 255), true);
			m_status[8][3] = 0;
		}
		break;
	case IDC_MFCBUTTON_85:
		if (m_status[8][4] != 1) {
			m_btn_85.SetFaceColor(RGB(0, 0, 0), true);
			m_status[8][4] = 1;
		}
		else {
			m_btn_85.SetFaceColor(RGB(255, 255, 255), true);
			m_status[8][4] = 0;
		}
		break;
	case IDC_MFCBUTTON_86:
		if (m_status[8][5] != 1) {
			m_btn_86.SetFaceColor(RGB(0, 0, 0), true);
			m_status[8][5] = 1;
		}
		else {
			m_btn_86.SetFaceColor(RGB(255, 255, 255), true);
			m_status[8][5] = 0;
		}
		break;
	case IDC_MFCBUTTON_87:
		if (m_status[8][6] != 1) {
			m_btn_87.SetFaceColor(RGB(0, 0, 0), true);
			m_status[8][6] = 1;
		}
		else {
			m_btn_87.SetFaceColor(RGB(255, 255, 255), true);
			m_status[8][6] = 0;
		}
		break;
	case IDC_MFCBUTTON_88:
		if (m_status[8][7] != 1) {
			m_btn_88.SetFaceColor(RGB(0, 0, 0), true);
			m_status[8][7] = 1;
		}
		else {
			m_btn_88.SetFaceColor(RGB(255, 255, 255), true);
			m_status[8][7] = 0;
		}
		break;
	case IDC_MFCBUTTON_89:
		if (m_status[8][8] != 1) {
			m_btn_89.SetFaceColor(RGB(0, 0, 0), true);
			m_status[8][8] = 1;
		}
		else {
			m_btn_89.SetFaceColor(RGB(255, 255, 255), true);
			m_status[8][8] = 0;
		}
		break;
	case IDC_MFCBUTTON_90:
		if (m_status[8][9] != 1) {
			m_btn_90.SetFaceColor(RGB(0, 0, 0), true);
			m_status[8][9] = 1;
		}
		else {
			m_btn_90.SetFaceColor(RGB(255, 255, 255), true);
			m_status[8][9] = 0;
		}
		break;
	case IDC_MFCBUTTON_91:
		if (m_status[9][0] != 1) {
			m_btn_91.SetFaceColor(RGB(0, 0, 0), true);
			m_status[9][0] = 1;
		}
		else {
			m_btn_91.SetFaceColor(RGB(255, 255, 255), true);
			m_status[9][0] = 0;
		}
		break;
	case IDC_MFCBUTTON_92:
		if (m_status[9][1] != 1) {
			m_btn_92.SetFaceColor(RGB(0, 0, 0), true);
			m_status[9][1] = 1;
		}
		else {
			m_btn_92.SetFaceColor(RGB(255, 255, 255), true);
			m_status[9][1] = 0;
		}
		break;
	case IDC_MFCBUTTON_93:
		if (m_status[9][2] != 1) {
			m_btn_93.SetFaceColor(RGB(0, 0, 0), true);
			m_status[9][2] = 1;
		}
		else {
			m_btn_93.SetFaceColor(RGB(255, 255, 255), true);
			m_status[9][2] = 0;
		}
		break;
	case IDC_MFCBUTTON_94:
		if (m_status[9][3] != 1) {
			m_btn_94.SetFaceColor(RGB(0, 0, 0), true);
			m_status[9][3] = 1;
		}
		else {
			m_btn_94.SetFaceColor(RGB(255, 255, 255), true);
			m_status[9][3] = 0;
		}
		break;
	case IDC_MFCBUTTON_95:
		if (m_status[9][4] != 1) {
			m_btn_95.SetFaceColor(RGB(0, 0, 0), true);
			m_status[9][4] = 1;
		}
		else {
			m_btn_95.SetFaceColor(RGB(255, 255, 255), true);
			m_status[9][4] = 0;
		}
		break;
	case IDC_MFCBUTTON_96:
		if (m_status[9][5] != 1) {
			m_btn_96.SetFaceColor(RGB(0, 0, 0), true);
			m_status[9][5] = 1;
		}
		else {
			m_btn_96.SetFaceColor(RGB(255, 255, 255), true);
			m_status[9][5] = 0;
		}
		break;
	case IDC_MFCBUTTON_97:
		if (m_status[9][6] != 1) {
			m_btn_97.SetFaceColor(RGB(0, 0, 0), true);
			m_status[9][6] = 1;
		}
		else {
			m_btn_97.SetFaceColor(RGB(255, 255, 255), true);
			m_status[9][6] = 0;
		}
		break;
	case IDC_MFCBUTTON_98:
		if (m_status[9][7] != 1) {
			m_btn_98.SetFaceColor(RGB(0, 0, 0), true);
			m_status[9][7] = 1;
		}
		else {
			m_btn_58.SetFaceColor(RGB(255, 255, 255), true);
			m_status[5][7] = 0;
		}
		break;
	case IDC_MFCBUTTON_99:
		if (m_status[9][8] != 1) {
			m_btn_99.SetFaceColor(RGB(0, 0, 0), true);
			m_status[9][8] = 1;
		}
		else {
			m_btn_99.SetFaceColor(RGB(255, 255, 255), true);
			m_status[9][8] = 0;
		}
		break;
	case IDC_MFCBUTTON_100:
		if (m_status[9][9] != 1) {
			m_btn_100.SetFaceColor(RGB(0, 0, 0), true);
			m_status[9][9] = 1;
		}
		else {
			m_btn_100.SetFaceColor(RGB(255, 255, 255), true);
			m_status[9][9] = 0;
		}
		break;
	}
	m_break = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++)
			if (m_status[i][j] != m_map[m_mapnum][i][j]) {
				m_break = 1;
				break;
			}
		if (m_break)
			break;
	}
	m_correct = 0;
	m_total = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (m_map[m_mapnum][i][j])
				m_total++;
			if (m_status[i][j])
				m_correct++;
		}
	}

	m_strProgress.Format(_T("%d / %d"), m_correct, m_total);
	UpdateData(FALSE);
	if (m_break == 0)
		m_clear = 1;
	if (m_clear) {
		AfxMessageBox(_T("클리어!"), MB_OK | MB_ICONINFORMATION);
		m_clear = 0;
	}
}







void CDlgNonogram::OnBnClickedButtonHint()
{
	m_hintBreak = 0;
	m_hintX = 0;
	m_hintY = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (m_status[i][j] == 0 && m_map[m_mapnum][i][j] == 1) {
				m_hintX = i;
				m_hintY = j;
				m_hintBreak = 1;
				break;
			}
			else if (m_status[i][j] == 1 && m_map[m_mapnum][i][j] == 0) {
				m_hintX = i;
				m_hintY = j;
				m_hintBreak = 2;
				break;
			}
		}
		if (m_hintBreak)
			break;
	}
	m_hint = 10 * m_hintX + m_hintY + 1;
	if(m_hintBreak == 0)
		AfxMessageBox(_T("힌트가 없습니다!"), MB_OK | MB_ICONINFORMATION);
	switch (m_hint) {
	case 1:
		if(m_hintBreak == 1)
		m_btn_1.SetFaceColor(RGB(0, 255, 0), true);
		else if(m_hintBreak == 2)
		m_btn_1.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 2:
		if (m_hintBreak == 1)
			m_btn_2.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_2.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 3:
		if (m_hintBreak == 1)
			m_btn_3.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_3.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 4:
		if (m_hintBreak == 1)
			m_btn_4.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_4.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 5:
		if (m_hintBreak == 1)
			m_btn_5.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_5.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 6:
		if (m_hintBreak == 1)
			m_btn_6.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_6.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 7:
		if (m_hintBreak == 1)
			m_btn_7.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_7.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 8:
		if (m_hintBreak == 1)
			m_btn_8.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_8.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 9:
		if (m_hintBreak == 1)
			m_btn_9.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_9.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 10:
		if (m_hintBreak == 1)
			m_btn_10.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_10.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 11:
		if (m_hintBreak == 1)
			m_btn_11.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_11.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 12:
		if (m_hintBreak == 1)
			m_btn_12.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_12.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 13:
		if (m_hintBreak == 1)
			m_btn_13.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_13.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 14:
		if (m_hintBreak == 1)
			m_btn_14.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_14.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 15:
		if (m_hintBreak == 1)
			m_btn_15.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_15.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 16:
		if (m_hintBreak == 1)
			m_btn_16.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_16.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 17:
		if (m_hintBreak == 1)
			m_btn_17.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_17.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 18:
		if (m_hintBreak == 1)
			m_btn_18.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_18.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 19:
		if (m_hintBreak == 1)
			m_btn_19.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_19.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 20:
		if (m_hintBreak == 1)
			m_btn_20.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_20.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 21:
		if (m_hintBreak == 1)
			m_btn_21.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_21.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 22:
		if (m_hintBreak == 1)
			m_btn_22.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_22.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 23:
		if (m_hintBreak == 1)
			m_btn_23.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_23.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 24:
		if (m_hintBreak == 1)
			m_btn_24.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_24.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 25:
		if (m_hintBreak == 1)
			m_btn_25.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_25.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 26:
		if (m_hintBreak == 1)
			m_btn_26.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_26.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 27:
		if (m_hintBreak == 1)
			m_btn_27.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_27.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 28:
		if (m_hintBreak == 1)
			m_btn_28.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_28.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 29:
		if (m_hintBreak == 1)
			m_btn_29.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_29.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 30:
		if (m_hintBreak == 1)
			m_btn_30.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_30.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 31:
		if (m_hintBreak == 1)
			m_btn_31.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_31.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 32:
		if (m_hintBreak == 1)
			m_btn_32.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_32.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 33:
		if (m_hintBreak == 1)
			m_btn_33.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_33.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 34:
		if (m_hintBreak == 1)
			m_btn_34.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_34.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 35:
		if (m_hintBreak == 1)
			m_btn_35.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_35.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 36:
		if (m_hintBreak == 1)
			m_btn_36.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_36.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 37:
		if (m_hintBreak == 1)
			m_btn_37.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_37.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 38:
		if (m_hintBreak == 1)
			m_btn_38.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_38.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 39:
		if (m_hintBreak == 1)
			m_btn_39.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_39.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 40:
		if (m_hintBreak == 1)
			m_btn_40.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_40.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 41:
		if (m_hintBreak == 1)
			m_btn_41.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_41.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 42:
		if (m_hintBreak == 1)
			m_btn_42.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_42.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 43:
		if (m_hintBreak == 1)
			m_btn_43.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_43.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 44:
		if (m_hintBreak == 1)
			m_btn_44.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_44.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 45:
		if (m_hintBreak == 1)
			m_btn_45.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_45.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 46:
		if (m_hintBreak == 1)
			m_btn_46.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_46.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 47:
		if (m_hintBreak == 1)
			m_btn_47.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_47.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 48:
		if (m_hintBreak == 1)
			m_btn_48.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_48.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 49:
		if (m_hintBreak == 1)
			m_btn_49.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_49.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 50:
		if (m_hintBreak == 1)
			m_btn_50.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_50.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 51:
		if (m_hintBreak == 1)
			m_btn_51.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_51.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 52:
		if (m_hintBreak == 1)
			m_btn_52.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_52.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 53:
		if (m_hintBreak == 1)
			m_btn_53.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_53.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 54:
		if (m_hintBreak == 1)
			m_btn_54.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_54.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 55:
		if (m_hintBreak == 1)
			m_btn_55.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_55.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 56:
		if (m_hintBreak == 1)
			m_btn_56.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_56.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 57:
		if (m_hintBreak == 1)
			m_btn_57.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_57.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 58:
		if (m_hintBreak == 1)
			m_btn_58.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_58.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 59:
		if (m_hintBreak == 1)
			m_btn_59.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_59.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 60:
		if (m_hintBreak == 1)
			m_btn_60.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_60.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 61:
		if (m_hintBreak == 1)
			m_btn_61.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_61.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 62:
		if (m_hintBreak == 1)
			m_btn_62.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_62.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 63:
		if (m_hintBreak == 1)
			m_btn_63.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_63.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 64:
		if (m_hintBreak == 1)
			m_btn_64.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_64.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 65:
		if (m_hintBreak == 1)
			m_btn_65.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_65.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 66:
		if (m_hintBreak == 1)
			m_btn_66.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_66.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 67:
		if (m_hintBreak == 1)
			m_btn_67.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_67.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 68:
		if (m_hintBreak == 1)
			m_btn_68.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_68.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 69:
		if (m_hintBreak == 1)
			m_btn_69.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_69.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 70:
		if (m_hintBreak == 1)
			m_btn_70.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_70.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 71:
		if (m_hintBreak == 1)
			m_btn_71.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_71.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 72:
		if (m_hintBreak == 1)
			m_btn_72.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_72.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 73:
		if (m_hintBreak == 1)
			m_btn_73.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_73.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 74:
		if (m_hintBreak == 1)
			m_btn_74.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_74.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 75:
		if (m_hintBreak == 1)
			m_btn_75.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_75.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 76:
		if (m_hintBreak == 1)
			m_btn_76.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_76.SetFaceColor(RGB(255, 0, 0), true);
	case 77:
		if (m_hintBreak == 1)
			m_btn_77.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_77.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 78:
		if (m_hintBreak == 1)
			m_btn_78.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_78.SetFaceColor(RGB(255, 0, 0), true);
	case 79:
		if (m_hintBreak == 1)
			m_btn_79.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_79.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 80:
		if (m_hintBreak == 1)
			m_btn_80.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_80.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 81:
		if (m_hintBreak == 1)
			m_btn_81.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_81.SetFaceColor(RGB(255, 0, 0), true);
	case 82:
		if (m_hintBreak == 1)
			m_btn_82.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_82.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 83:
		if (m_hintBreak == 1)
			m_btn_83.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_83.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 84:
		if (m_hintBreak == 1)
			m_btn_84.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_84.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 85:
		if (m_hintBreak == 1)
			m_btn_85.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_85.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 86:
		if (m_hintBreak == 1)
			m_btn_86.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_86.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 87:
		if (m_hintBreak == 1)
			m_btn_87.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_87.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 88:
		if (m_hintBreak == 1)
			m_btn_88.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_88.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 89:
		if (m_hintBreak == 1)
			m_btn_89.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_89.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 90:
		if (m_hintBreak == 1)
			m_btn_90.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_90.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 91:
		if (m_hintBreak == 1)
			m_btn_91.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_91.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 92:
		if (m_hintBreak == 1)
			m_btn_92.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_92.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 93:
		if (m_hintBreak == 1)
			m_btn_93.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_93.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 94:
		if (m_hintBreak == 1)
			m_btn_94.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_94.SetFaceColor(RGB(255, 0, 0), true);
	case 95:
		if (m_hintBreak == 1)
			m_btn_95.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_95.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 96:
		if (m_hintBreak == 1)
			m_btn_96.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_96.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 97:
		if (m_hintBreak == 1)
			m_btn_97.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_97.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 98:
		if (m_hintBreak == 1)
			m_btn_98.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_98.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 99:
		if (m_hintBreak == 1)
			m_btn_99.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_99.SetFaceColor(RGB(255, 0, 0), true);
		break;
	case 100:
		if (m_hintBreak == 1)
			m_btn_100.SetFaceColor(RGB(0, 255, 0), true);
		else if (m_hintBreak == 2)
			m_btn_100.SetFaceColor(RGB(255, 0, 0), true);
	}
}





BOOL CDlgNonogram::OnEraseBkgnd(CDC* pDC)
{
	CRect rect;
	GetClientRect(rect);
	pDC->FillSolidRect(rect, RGB(153, 153, 255));
	return TRUE;
}



