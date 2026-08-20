#include <bits/stdc++.h>
using namespace std;

// LeetCode #1 - Two Sum
//
// Approach:
// Use two nested loops to check every possible pair of elements.
// If the sum of two elements equals the target, return their indices.
//
// Time Complexity: O(n²)
// Space Complexity: O(1) auxiliary space

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }

        return {0};
    }
};