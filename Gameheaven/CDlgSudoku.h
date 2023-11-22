#pragma once
#include <vector>
#include "afxdialogex.h"


// CDlgSudoku 대화 상자

class CDlgSudoku : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgSudoku)

public:
	CDlgSudoku(CWnd* pParent = nullptr);   
	virtual ~CDlgSudoku();

#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_331 };
#endif

protected:
    virtual void DoDataExchange(CDataExchange* pDX); 
    DECLARE_MESSAGE_MAP()

private:
    int m_SudokuGrid[9][9];
    CEdit m_List[9][9];
    UINT editBoxIds[9][9] = {
        { IDC_EDIT_11, IDC_EDIT_12, IDC_EDIT_13, IDC_EDIT_14, IDC_EDIT_15, IDC_EDIT_16, IDC_EDIT_17, IDC_EDIT_18, IDC_EDIT_19 },
    { IDC_EDIT_21, IDC_EDIT_22, IDC_EDIT_23, IDC_EDIT_24, IDC_EDIT_25, IDC_EDIT_26, IDC_EDIT_27, IDC_EDIT_28, IDC_EDIT_29 },
    { IDC_EDIT_31, IDC_EDIT_32, IDC_EDIT_33, IDC_EDIT_34, IDC_EDIT_35, IDC_EDIT_36, IDC_EDIT_37, IDC_EDIT_38, IDC_EDIT_39 },
    { IDC_EDIT_41, IDC_EDIT_42, IDC_EDIT_43, IDC_EDIT_44, IDC_EDIT_45, IDC_EDIT_46, IDC_EDIT_47, IDC_EDIT_48, IDC_EDIT_49 },
    { IDC_EDIT_51, IDC_EDIT_52, IDC_EDIT_53, IDC_EDIT_54, IDC_EDIT_55, IDC_EDIT_56, IDC_EDIT_57, IDC_EDIT_58, IDC_EDIT_59 },
    { IDC_EDIT_61, IDC_EDIT_62, IDC_EDIT_63, IDC_EDIT_64, IDC_EDIT_65, IDC_EDIT_66, IDC_EDIT_67, IDC_EDIT_68, IDC_EDIT_69 },
    { IDC_EDIT_71, IDC_EDIT_72, IDC_EDIT_73, IDC_EDIT_74, IDC_EDIT_75, IDC_EDIT_76, IDC_EDIT_77, IDC_EDIT_78, IDC_EDIT_79 },
    { IDC_EDIT_81, IDC_EDIT_82, IDC_EDIT_83, IDC_EDIT_84, IDC_EDIT_85, IDC_EDIT_86, IDC_EDIT_87, IDC_EDIT_88, IDC_EDIT_89 },
    { IDC_EDIT_91, IDC_EDIT_92, IDC_EDIT_93, IDC_EDIT_94, IDC_EDIT_95, IDC_EDIT_96, IDC_EDIT_97, IDC_EDIT_98, IDC_EDIT_99 },
    };

public:
    virtual BOOL OnInitDialog();
    void SetSudokuBoardToEditBoxes();
    void ResetSudoku();
    void GenerateSudoku();
    afx_msg void OnButton331check();
    afx_msg void OnButton331giveup();
    afx_msg void OnButton331reset();
    bool SolveSudoku(int grid[9][9]);
    bool IsSafe(int grid[9][9], int row, int col, int num);
    bool FindEmptyCell(int grid[9][9], int& row, int& col);
    afx_msg void OnButtonDelete();
};

