#pragma once
#include "afxdialogex.h"



// CDlgNonogram 대화 상자

class CDlgNonogram : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgNonogram)

public:
	CDlgNonogram(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CDlgNonogram();

	// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_NONOGRAM };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:

	virtual BOOL OnInitDialog();
	//	CMFCButton m_btn_1;
	afx_msg void OnBtnClick(UINT uiID);
	int m_status[10][10];
	int m_mapnum;
	CMFCButton m_btn_1;
	CMFCButton m_btn_10;
	CMFCButton m_btn_100;
	CMFCButton m_btn_11;
	CMFCButton m_btn_12;
	CMFCButton m_btn_13;
	CMFCButton m_btn_14;
	CMFCButton m_btn_15;
	CMFCButton m_btn_16;
	CMFCButton m_btn_17;
	CMFCButton m_btn_18;
	CMFCButton m_btn_19;
	CMFCButton m_btn_2;
	CMFCButton m_btn_20;
	CMFCButton m_btn_21;
	CMFCButton m_btn_22;
	CMFCButton m_btn_23;
	CMFCButton m_btn_24;
	CMFCButton m_btn_25;
	CMFCButton m_btn_26;
	CMFCButton m_btn_28;
	CMFCButton m_btn_27;
	CMFCButton m_btn_29;
	CMFCButton m_btn_3;
	CMFCButton m_btn_30;
	CMFCButton m_btn_31;
	CMFCButton m_btn_32;
	CMFCButton m_btn_33;
	CMFCButton m_btn_35;
	CMFCButton m_btn_34;
	CMFCButton m_btn_36;
	CMFCButton m_btn_37;
	CMFCButton m_btn_38;
	CMFCButton m_btn_39;
	CMFCButton m_btn_4;
	CMFCButton m_btn_40;
	CMFCButton m_btn_41;
	CMFCButton m_btn_42;
	CMFCButton m_btn_43;
	CMFCButton m_btn_44;
	CMFCButton m_btn_45;
	CMFCButton m_btn_46;
	CMFCButton m_btn_47;
	CMFCButton m_btn_48;
	CMFCButton m_btn_49;
	CMFCButton m_btn_5;
	CMFCButton m_btn_50;
	CMFCButton m_btn_51;
	CMFCButton m_btn_52;
	CMFCButton m_btn_53;
	CMFCButton m_btn_54;
	CMFCButton m_btn_56;
	CMFCButton m_btn_55;
	CMFCButton m_btn_57;
	CMFCButton m_btn_58;
	CMFCButton m_btn_59;
	CMFCButton m_btn_6;
	CMFCButton m_btn_60;
	CMFCButton m_btn_61;
	CMFCButton m_btn_62;
	CMFCButton m_btn_63;
	CMFCButton m_btn_64;
	CMFCButton m_btn_65;
	CMFCButton m_btn_66;
	CMFCButton m_btn_67;
	CMFCButton m_btn_69;
	CMFCButton m_btn_68;
	CMFCButton m_btn_7;
	CMFCButton m_btn_70;
	CMFCButton m_btn_71;
	CMFCButton m_btn_72;
	CMFCButton m_btn_73;
	CMFCButton m_btn_74;
	CMFCButton m_btn_75;
	CMFCButton m_btn_76;
	CMFCButton m_btn_77;
	CMFCButton m_btn_78;
	CMFCButton m_btn_79;
	CMFCButton m_btn_8;
	CMFCButton m_btn_80;
	CMFCButton m_btn_81;
	CMFCButton m_btn_82;
	CMFCButton m_btn_83;
	CMFCButton m_btn_84;
	CMFCButton m_btn_85;
	CMFCButton m_btn_86;
	CMFCButton m_btn_87;
	CMFCButton m_btn_88;
	CMFCButton m_btn_89;
	CMFCButton m_btn_9;
	CMFCButton m_btn_90;
	CMFCButton m_btn_91;
	CMFCButton m_btn_92;
	CMFCButton m_btn_93;
	CMFCButton m_btn_94;
	CMFCButton m_btn_95;
	CMFCButton m_btn_96;
	CMFCButton m_btn_97;
	CMFCButton m_btn_98;
	CMFCButton m_btn_99;
	CString m_strH[10];
	CString m_strV[10];
	CString m_strStage;
	CString m_strName[10] = { _T("꽃게"),_T("달팽이"),_T("고양이"),_T("헬리콥터"),_T("토끼"),_T("찻잔"),_T("고래"),_T("고기"),_T("커피"),_T("선글라스") };
	int m_clear;
	int m_break;
	int m_hintX;
	int m_hintY;
	int m_hintBreak;
	int m_hint;
	int m_total;
	int m_correct;
	CString m_strProgress;
	CString m_hintH[10][10] = {
		{_T("2\r\n1\r\n2"),_T("4\r\n1\r\n1"),_T("2\r\n4"),_T("6"),_T("5"),_T("5"),_T("6"),_T("2\r\n4"),_T("4\r\n1\r\n1"),_T("2\r\n1\r\n2")},
		{_T("8"),_T("2\r\n1\r\n1"),_T("1\r\n3\r\n1\r\n1"),_T("1\r\n1\r\n1\r\n1"),_T("1\r\n5\r\n1"),_T("2\r\n2\r\n1"),_T("6\r\n1"),_T("1\r\n2"),_T("4\r\n4"),_T("1\r\n3")},
		{_T("2\r\n1"),_T("1\r\n2\r\n3"),_T("9"),_T("7\r\n1"),_T("4\r\n5"),_T("5"),_T("4"),_T("2\r\n1"),_T("1\r\n2\r\n2"),_T("4")},
		{_T("3"),_T("1"),_T("2"),_T("1\r\n4\r\n1"),_T("1\r\n6\r\n1"),_T("1\r\n8"),_T("7\r\n1"),_T("1\r\n1\r\n4"),_T("1\r\n2\r\n2\r\n1"),_T("1\r\n4\r\n2")},
		{_T("7\r\n2"),_T("6\r\n1"),_T("4"),_T("2"),_T("2"),_T("1\r\n1"),_T("1\r\n2"),_T("2\r\n2"),_T("2\r\n1\r\n4"),_T("3\r\n5")},
		{_T("1"),_T("5\r\n1"),_T("2\r\n1\r\n3"),_T("1\r\n5"),_T("2\r\n7"),_T("7"),_T("2\r\n7"),_T("1\r\n5\r\n1"),_T("1\r\n1\r\n1"),_T("3\r\n2")},
		{_T("4"),_T("2\r\n2\r\n2"),_T("1\r\n4\r\n1"),_T("1\r\n5\r\n1"),_T("1\r\n8"),_T("1\r\n7"),_T("1\r\n7"),_T("2\r\n6"),_T("3"),_T("3")},
		{_T("2\r\n3"),_T("1\r\n5"),_T("2\r\n3"),_T("1\r\n3"),_T("1\r\n1\r\n2"),_T("1\r\n1\r\n4"),_T("2\r\n3\r\n2"),_T("1\r\n2\r\n1"),_T("4\r\n2"),_T("3")},
		{_T("7"),_T("2\r\n2\r\n2"),_T("1\r\n1\r\n4\r\n1"),_T("2\r\n4\r\n1"),_T("1\r\n1\r\n6"),_T("2\r\n6"),_T("1\r\n1\r\n6"),_T("1\r\n7"),_T("1\r\n2"),_T("1\r\n4")},
		{_T("1\r\n4"),_T("4\r\n5"),_T("2\r\n2\r\n1"),_T("2\r\n6"),_T("2\r\n1\r\n1"),_T("1\r\n4"),_T("1\r\n1\r\n2"),_T("1\r\n2\r\n1"),_T("2\r\n4"),_T("3\r\n1")}
	};
	CString m_hintV[10][10] = {
		{_T("1 1 1 1"),_T("3 3"),_T("1 1"),_T("1 1 1 1"),_T("8"),_T("6"),_T("10"),_T("6"),_T("2 4 2"),_T("1 1")},
		{_T("5 1"),_T("2 2 2"),_T("1 1 1"),_T("1 3 4"),_T("1 1 1 1 1"),_T("1 1 1 1 2"),_T("1 3 1"),_T("6 1"),_T("1 2"),_T("7")},
		{_T("1 1"),_T("4"),_T("1 3 1"),_T("5 1"),_T("3 2"),_T("4 2"),_T("5 1"),_T("6 1"),_T("2 3 2"),_T("2 6")},
		{_T("3 3"),_T("1"),_T("5"),_T("1 4 2"),_T("7 1"),_T("1 5 1"),_T("7"),_T("5"),_T("1 1 1"),_T("7")},
		{_T("2 4"),_T("3 3"),_T("5 1"),_T("6 1"),_T("3"),_T("2 1"),_T("1 2"),_T("1 2"),_T("1 5"),_T("2 3")},
		{_T("1 1 2"),_T("1 1 1"),_T("0"),_T("7"),_T("1 6"),_T("1 5 1"),_T("1 7"),_T("7"),_T("5 1"),_T("10")},
		{_T("5"),_T("1 1"),_T("1 1 1"),_T("5"),_T("7"),_T("8 1"),_T("1 8"),_T("1 7"),_T("2 5"),_T("7")},
		{_T("2 3"),_T("1 1 1"),_T("2 3"),_T("2 1 1"),_T("2 3"),_T("3 4"),_T("3 2 2"),_T("4 1"),_T("4 2"),_T("3")},
		{_T("1 1 2 1"),_T("1 1 1"),_T("8"),_T("1 3"),_T("8 1"),_T("8 1"),_T("1 8"),_T("1 7"),_T("2 4"),_T("6")},
		{_T("9"),_T("5 2"),_T("1 1"),_T("4 4"),_T("1 4 3"),_T("2 1 2 1"),_T("4 4"),_T("1 1"),_T("1 2"),_T("1")}
	};
	afx_msg void OnClickedButtonPrevious();
	afx_msg void OnClickedButtonNext();
int m_map[10][10][10] = {
{{1,0,1,0,0,0,0,1,0,1},
{1,1,1,0,0,0,0,1,1,1},
{0,1,0,0,0,0,0,0,1,0},
{0,1,0,1,0,0,1,0,1,0},
{0,1,1,1,1,1,1,1,1,0},
{0,0,1,1,1,1,1,1,0,0},
{1,1,1,1,1,1,1,1,1,1},
{0,0,1,1,1,1,1,1,0,0},
{1,1,0,1,1,1,1,0,1,1},
{1,0,0,0,0,0,0,0,0,1}},

{{0,1,1,1,1,1,0,0,1,0},
{1,1,0,0,0,1,1,0,1,1},
{1,0,0,0,0,0,1,0,1,0},
{1,0,1,1,1,0,1,1,1,1},
{1,0,1,0,1,0,1,0,0,1},
{1,0,1,0,1,0,1,0,1,1},
{1,0,0,0,1,1,1,0,1,0},
{1,1,1,1,1,1,0,0,1,0},
{1,0,0,0,0,0,0,1,1,0},
{0,1,1,1,1,1,1,1,0,0}},

{{0,0,1,0,1,0,0,0,0,0},
{0,1,1,1,1,0,0,0,0,0},
{1,0,1,1,1,0,0,0,1,0},
{1,1,1,1,1,0,0,1,0,0},
{0,1,1,1,0,0,0,1,1,0},
{0,0,1,1,1,1,0,0,1,1},
{0,0,1,1,1,1,1,0,0,1},
{0,1,1,1,1,1,1,0,0,1},
{0,1,1,0,1,1,1,0,1,1},
{1,1,0,1,1,1,1,1,1,0}},

{{0,0,0,1,1,1,0,1,1,1},
{0,0,0,0,0,0,1,0,0,0},
{0,0,0,0,1,1,1,1,1,0},
{1,0,0,1,1,1,1,0,1,1},
{1,1,1,1,1,1,1,0,0,1},
{1,0,1,1,1,1,1,0,0,1},
{0,0,0,1,1,1,1,1,1,1},
{0,0,0,0,1,1,1,1,1,0},
{0,0,0,0,0,1,0,1,0,1},
{0,0,0,1,1,1,1,1,1,1}},

{{1,1,0,0,0,0,1,1,1,1},
{1,1,1,0,0,0,0,1,1,1},
{1,1,1,1,1,0,0,0,0,1},
{1,1,1,1,1,1,0,0,1,0},
{1,1,1,0,0,0,0,0,0,0},
{1,1,0,0,0,0,0,0,0,1},
{1,0,0,0,0,0,0,0,1,1},
{0,0,0,0,0,0,1,0,1,1},
{1,0,0,0,0,1,1,1,1,1},
{1,1,0,0,0,0,0,1,1,1}},

{{0,0,1,0,1,0,1,1,0,0},
{0,0,1,0,1,0,1,0,0,0},
{0,0,0,0,0,0,0,0,0,0},
{0,1,1,1,1,1,1,1,0,0},
{0,1,0,0,1,1,1,1,1,1},
{0,1,0,1,1,1,1,1,0,1},
{0,1,0,1,1,1,1,1,1,1},
{0,1,1,1,1,1,1,1,0,0},
{0,0,1,1,1,1,1,0,0,1},
{1,1,1,1,1,1,1,1,1,1}},

{{0,0,1,1,1,1,1,0,0,0},
{0,1,0,0,0,0,0,1,0,0},
{0,1,0,0,1,0,0,1,0,0},
{0,0,1,1,1,1,1,0,0,0},
{0,1,1,1,1,1,1,1,0,0},
{1,1,1,1,1,1,1,1,0,1},
{1,0,1,1,1,1,1,1,1,1},
{1,0,0,1,1,1,1,1,1,1},
{1,1,0,0,1,1,1,1,1,0},
{0,1,1,1,1,1,1,1,0,0}},

{{1,1,0,1,1,1,0,0,0,0},
{1,0,1,0,0,0,1,0,0,0},
{0,1,1,0,0,1,1,1,0,0},
{1,1,0,0,1,0,0,0,1,0},
{1,1,0,0,0,0,1,1,1,0},
{1,1,1,0,0,1,1,1,1,0},
{0,1,1,1,0,1,1,0,1,1},
{0,0,1,1,1,1,0,0,0,1},
{0,0,0,1,1,1,1,0,1,1},
{0,0,0,0,0,0,1,1,1,0}},

{{0,0,1,0,1,0,1,1,0,1},
{0,1,0,1,0,1,0,0,0,0},
{1,1,1,1,1,1,1,1,0,0},
{1,0,0,0,0,0,0,1,1,1},
{1,1,1,1,1,1,1,1,0,1},
{1,1,1,1,1,1,1,1,0,1},
{1,0,1,1,1,1,1,1,1,1},
{1,0,1,1,1,1,1,1,1,0},
{1,1,0,0,1,1,1,1,0,0},
{0,1,1,1,1,1,1,0,0,0}},

{{0,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,0,0,0,1,1},
{0,1,0,0,0,0,0,0,0,1},
{1,1,1,1,0,1,1,1,1,0},
{1,0,1,1,1,1,0,1,1,1},
{1,1,0,1,0,1,1,0,1,0},
{1,1,1,1,0,1,1,1,1,0},
{0,1,0,1,0,0,0,0,0,0},
{0,1,0,1,1,0,0,0,0,0},
{0,1,0,0,0,0,0,0,0,0}}
};

afx_msg void OnBnClickedButtonHint();
afx_msg void OnBnClickedButtonReset();
CButton m_btnHint;
CButton m_btnReset;
CButton m_btnPrevious;
CButton m_btnNext;
afx_msg BOOL OnEraseBkgnd(CDC* pDC);
};
