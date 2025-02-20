#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std; 

class Solution {
public:
    bool ContainsDuplicate(vector<int>& nums) {
        unordered_set<int> hashSet; 
        for (int num : nums) {
            if (hashSet.find(num) != hashSet.end()) {
                return true;
            }
            hashSet.insert(num);
        }
        return false;

    }
  
}; 

int main() {
    vector<int> nums = {1,2,3};
    Solution solution; 
    bool containsDuplicate = solution.ContainsDuplicate(nums); 
    cout << containsDuplicate << endl;

     

}