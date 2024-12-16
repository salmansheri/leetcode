/*use sorting for this question */
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
  vector<vector<int>> merge(vector<vector<int>> &intervals) {

    // Step1: Sort the intervals by start time
    sort(intervals.begin(), intervals.end());

    // Step 2: Initialize a result vector
    vector<vector<int>> merged;

    // Step 3: Traverse through the sorted Intervals

    for (const auto &interval : intervals) {
      // If Merged is empty or the current interval does not overlap
      if (merged.empty() || merged.back()[1] < interval[0]) {
        merged.push_back(interval);

      } else {
        // Overlap exists merge Intervals
        merged.back()[1] = max(merged.back()[1], interval[1]);
      }
    }

    return merged;
  }
};

int main() {
  vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
  Solution solution;
  // Call Merge function
  vector<vector<int>> result = solution.merge(intervals);

  for (const auto &interval : result) {
    cout << "[" << interval[0] << "," << interval[1] << "]";
  }

  return 0;
}


