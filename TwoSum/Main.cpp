#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std; 

class Solution {
    public: 
        vector<int> TwoSum(vector<int>& nums, int target) {
            unordered_map<int, int> result; 
            // Store each number and its index in the map
            for (int i =0; i < nums.size(); ++i) {
                result[nums[i]] = i; 
            }

            for (int i = 0; i< nums.size(); ++i) {
                // find the complement of the current number
                int complement = target - nums[i]; 

                if (result.find(complement) != result.end() && result[complement] != i) {
                    return {i, result[complement]}; 
                }
            }

            throw invalid_argument("No two sum solution found"); 
        }

}; 

int main() {
    Solution solution; 
    vector<int> nums = { 2, 7, 11, 15}; 
    int target = 9; 
    vector<int> result = solution.TwoSum(nums, target); 
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " "; 
    }
    cout << endl; 
}