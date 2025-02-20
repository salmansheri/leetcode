#include<iostream>
#include<string>
#include<unordered_set>
using namespace std; 

class Solution {
public:
   int JewelsAndStones(string jewels, string stones){
        // Declaring a unordered to stone jewels
        unordered_set<char> jewelSet(jewels.begin(), jewels.end()); 
        
        int count = 0;
        for (char stone : stones) {
            if (jewelSet.find(stone) != jewelSet.end()) {
                count++;
            }
        }

        return count; 
        

    }
}; 

int main() {
    string jewels = "aA";
    string stones = "aAAbbbb";
    Solution solution; 
    int count = solution.JewelsAndStones(jewels, stones);
    cout << count << endl; 

}