// CDlgSudoku.cpp: 구현 파일
//

#include "pch.h"
#include "Gameheaven.h"
#include "afxdialogex.h"
#include "CDlgSudoku.h"
#include <cstdlib>
#include <ctime>

IMPLEMENT_DYNAMIC(CDlgSudoku, CDialogEx)

CDlgSudoku::CDlgSudoku(CWnd* pParent /*=nullptr*/)
    : CDialogEx(IDD_DIALOG_331, pParent) {
    memset(m_SudokuGrid, 0, sizeof(m_SudokuGrid));
}
CDlgSudoku::~CDlgSudoku()
{
}

void CDlgSudoku::DoDataExchange(CDataExchange* pDX) {
    CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CDlgSudoku, CDialogEx)
    ON_COMMAND(IDC_BUTTON_331CHECK, &CDlgSudoku::OnButton331check)
    ON_COMMAND(IDC_BUTTON_331GIVEUP, &CDlgSudoku::OnButton331giveup)
    ON_COMMAND(IDC_BUTTON_331RESET, &CDlgSudoku::OnButton331reset)
    ON_COMMAND(IDC_BUTTON_DELETE, &CDlgSudoku::OnButtonDelete)
END_MESSAGE_MAP()

BOOL CDlgSudoku::OnInitDialog()
{
    CDialogEx::OnInitDialog();
    for (int row = 1; row <= 9; row++) {
        for (int col = 1; col <= 9; col++) {
            int controlId = 10 * row + col;
            int rowIndex = row;
            int colIndex = col;
            m_List[rowIndex][colIndex].SubclassDlgItem(controlId, this);
        }
    }
    SetSudokuBoardToEditBoxes();
    return TRUE;
}


void CDlgSudoku::GenerateSudoku() {
    srand(static_cast<unsigned int>(time(nullptr)));
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            m_SudokuGrid[i][j] = 0;
        }
    }
    if (!SolveSudoku(m_SudokuGrid)) {
        return;
    }
    int EmptyCell = 35;
    for (int i = 0; i < EmptyCell; i++) {
        int j = rand() % 9+0;
        int k = rand() % 9+0;
        m_SudokuGrid[j][k] = 0;
    }
}


void CDlgSudoku::SetSudokuBoardToEditBoxes() {
    CString cellValue;
    for (int row = 0; row < 9; ++row) {
        for (int col = 0; col < 9; ++col) {
            int value = m_SudokuGrid[row][col];
            cellValue.Format(_T("%d"), value);
            CEdit* editBox = (CEdit*)GetDlgItem(editBoxIds[row][col]);
            if (editBox) {
                editBox->SetWindowText(cellValue);
            }
        }
    }
}

void CDlgSudoku::ResetSudoku() {
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            m_SudokuGrid[i][j] = 0;
        }
    }
}
bool CDlgSudoku::SolveSudoku(int grid[9][9]) {
    int row, col;

    if (!FindEmptyCell(grid, row, col)) {
        return true;
    }

    for (int k=1; k <= 9; k++) {
        int num = rand() % 9 + 1;
        if (IsSafe(grid, row, col, num)) {
            grid[row][col] = num;

            if (SolveSudoku(grid)) {
                return true;
            }

            grid[row][col] = 0;
        }
    }

    return false;
}
bool CDlgSudoku :: FindEmptyCell(int grid[9][9], int& row, int& col) {
    for (row = 0; row < 9; ++row) {
        for (col = 0; col < 9; ++col) {
            if (grid[row][col] == 0) {
                return true;
            }
        }
    }
    return false;
}
bool CDlgSudoku::IsSafe(int grid[9][9], int row, int col, int num) {
    for (int x = 0; x < 9; ++x) {
        if (grid[row][x] == num) {
            return false;
        }
    }
    for (int y = 0; y < 9; ++y) {
        if (grid[y][col] == num) {
            return false;
        }
    }
    int subgridRowStart = row - row % 3;
    int subgridColStart = col - col % 3;
    for (int x = 0; x < 3; ++x) {
        for (int y = 0; y < 3; ++y) {
            if (grid[subgridRowStart + x][subgridColStart + y] == num) {
                return false;
            }
        }
    }

    return true;
}


void CDlgSudoku::OnButton331check()
{
    if (!SolveSudoku(m_SudokuGrid)) {
        AfxMessageBox(_T("정답이 아닙니다!"));
    }
    else
    {
        AfxMessageBox(_T("정답입니다!"));
    }
}


void CDlgSudoku::OnButton331giveup()
{
    GenerateSudoku();
    SetSudokuBoardToEditBoxes();
}


void CDlgSudoku::OnButton331reset()
{
    SetSudokuBoardToEditBoxes();
}



void CDlgSudoku::OnButtonDelete()
{
    ResetSudoku();
    SetSudokuBoardToEditBoxes();
}
