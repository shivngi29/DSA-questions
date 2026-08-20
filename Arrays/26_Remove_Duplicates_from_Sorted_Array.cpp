#include <bits/stdc++.h>
using namespace std;

// LeetCode #26 - Remove Duplicates from Sorted Array
//
// Approach:
// Use a write pointer to keep track of the position where the next
// unique element should be placed.
// Since the array is sorted, an element is unique if it differs
// from the previously stored unique element.
//
// Time Complexity: O(n)
// Space Complexity: O(1) auxiliary space

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int write = 1;

        if (nums.empty()) {
            return 0;
        }

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[write - 1]) {
                nums[write] = nums[i];
                write++;
            }
        }

        return write;
    }
};