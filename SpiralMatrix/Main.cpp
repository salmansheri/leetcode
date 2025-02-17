#include<iostream>
#include<vector>
using namespace std; 

class Solution 
{
    public: 
        vector<int> spiralOrder(vector<vector<int>>& matrix)
        {
            vector<int> res; 
            if(matrix.empty()) return res;

            int m = matrix.size();
            int n = matrix[0].size();
            int UP = 0, RIGHT=1, DOWN = 2, LEFT = 3; 
            int direction = RIGHT;

            int UP_WALL = 0;
            int RIGHT_WALL = n;
            int DOWN_WALL = m;
            int LEFT_WALL = -1; 

            int i = 0; int j = 0; 

            while (res.size() != m * n)
            {
                if (direction == RIGHT)
                {
                    while (j<RIGHT_WALL)
                    {
                        res.push_back(matrix[i][j]);
                        j++;
                    }
                    i++;
                    j--;
                    RIGHT_WALL--;
                    direction = DOWN;

                } else if (direction == DOWN) {
                    while (i < DOWN_WALL)
                    {
                        res.push_back(matrix[i][j]);
                        i++;
                    }
                    i--;
                    j--;
                    DOWN_WALL--;
                    direction = LEFT;
                } else if (direction == LEFT) {
                    while (j > LEFT_WALL)
                    {
                        res.push_back(matrix[i][j]);
                        j--;
                    }
                    i--;
                    j++;
                    LEFT_WALL++;
                    direction = UP;
                } else {
                    while (i > UP_WALL) {
                        res.push_back(matrix[i][j]);
                        i--;
                    }
                    i++;
                    j++;
                    UP_WALL++;
                    direction = RIGHT;
                }

            }

            return res; 


        }
};

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    Solution solution;
    vector<int> ans = solution.spiralOrder(matrix);
    for (int i = 0; i< ans.size(); i++)
    {
        cout<< ans[i] <<"";
    }

    return 0; 

}