#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;


class Solution {
    public:
        bool CanConstruct(string ransomNote, string magazine) {
            unordered_map<char, int> hashMap;

            for (char c : magazine) {
                hashMap[c]++;
            }

            for (char ch : ransomNote) {
                if (hashMap[ch] > 0) {
                    hashMap[ch]--;

                } else {
                    return false; 
                }
            }

            return true;
            
        }

};

int main() {
    string ransomNote = "a";
    string magazine= "a";
    Solution solution; 
    bool canConstruct = solution.CanConstruct(ransomNote, magazine); 
    cout << canConstruct << endl;

}