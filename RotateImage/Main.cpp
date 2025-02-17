#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
    public: 
        void rotateImage(vector<vector<int>>& matrix) {
            int  n = matrix.size();


            // Transpose
            for (int i = 0; i < n; ++i) {
                for (int j = i + 1; j < n; ++j) {
                    swap(matrix[i][j], matrix[j][i]);
                }
            }

            // Reflection
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n /2; ++j) {
                    swap(matrix[i][j], matrix[i][n - j -1]);
                }
            }

        }


};

int main() {
    Solution solution;
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    solution.rotateImage(matrix); 
    for (int i = 0; i < matrix.size();i++) {
        for (int j = 0; j < matrix[0].size(); j++){
            cout << matrix[i][j] << " "; 
        }
        cout << endl; 
    }
}