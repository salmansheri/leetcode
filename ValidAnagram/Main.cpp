#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // if (s == t)
        // {
        //     return true;
        // }
        // else
        // {
        //     return false;
        // }
        if (s.size() != t.size()) 
        {
            return false; 
        }

        unordered_map<char, int> sMap, tMap; 
        for (char c: t)
        {
            tMap[c]++; 
        }

        for (char c: s)
        {
            sMap[c]++; 
        }

        return sMap == tMap; 
    }
};

int main()
{
    string s = "anagram";
    string t = "nagaram";
    Solution solution;
    bool isAnagram = solution.isAnagram(s, t);
    cout << isAnagram << endl;
}