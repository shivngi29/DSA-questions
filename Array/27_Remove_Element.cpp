#include <bits/stdc++.h>
using namespace std;

// LeetCode #27 - Remove Element
//
// Approach:
// Use remove() to move all elements equal to val to the end
// of the vector, then erase those elements.
// The remaining size of the vector is returned.
//
// Time Complexity: O(n)
// Space Complexity: O(1) auxiliary space

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        nums.erase(remove(nums.begin(), nums.end(), val), nums.end());

        return nums.size();
    }
};