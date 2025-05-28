#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std; 

class Solution {
    public:
        bool isValidSudoku(vector<vector<char>>& board) {
            // validate rows 
            for (int i = 0; i<9; i++) {
                unordered_set<char> rowSet; 
                for (int j = 0; j<9; j++) {
                    char item = board[i][j]; 
                    if (item != '.' && !rowSet.insert(item).second) {
                        return false; 
                    }
                }
            }

            // validate columns
            for (int i = 0; i<9;i++) {
                unordered_set<char> colSet; 
                for (int j = 0; j<9; j++) {
                    char item = board[j][i];
                    if (item != '.' && !colSet.insert(item).second) {
                        return false; 
                    }
                }
            }

            // validate 3x3 sub grids 
             vector<vector<int>> starts = {{0, 0}, {0, 3}, {0, 6},
                                      {3, 0}, {3, 3}, {3, 6},
                                      {6, 0}, {6, 3}, {6, 6}};

            for (auto& start : starts) {
                unordered_set<char> set; 
                for (int row = start[0]; row < start[0]+3; row++) {
                    for (int col = start[1]; col < start[1] + 3; col++) {
                        char item = board[row][col]; 

                        if (item != '.' && !set.insert(item).second) {
                            return false; 
                        }

                    }
                }
            }

            return true; 
        

        }

}; 

int main() {
    Solution solution; 
    vector<vector<char>> board = {
    {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
    {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
    {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
    {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
    {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
    {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
    {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
    {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
    {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
};
    bool result = solution.isValidSudoku(board);
    cout << (result ? "Valid Sudoku" : "Invalid Sudoku") << endl;
    return 0;
}