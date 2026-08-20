#include <bits/stdc++.h>
using namespace std;

// LeetCode #1979 - Find Greatest Common Divisor of Array
//
// Approach:
// Sort the array to find the smallest and largest elements.
// The GCD of the entire array is the same as the GCD of its
// smallest and largest elements.
// Check possible divisors from the smallest element down to 1.
//
// Time Complexity: O(n log n + m)
// Space Complexity: O(1) auxiliary space
// where n is the number of elements and m is the smallest element.

class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int small = nums[0];
        int large = nums[nums.size() - 1];

        for (int i = small; i >= 1; i--) {
            if (large % small == 0) {
                return small;
            }
            else if (large % i == 0 && small % i == 0) {
                return i;
            }
        }

        return 0;
    }
};