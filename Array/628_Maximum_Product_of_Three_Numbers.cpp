// LeetCode #628 - Maximum Product of Three Numbers
// Approach: Sort the array in descending order.
// The maximum product is either:
// 1. The three largest numbers
// 2. The largest number × the two smallest numbers
//
// Time Complexity: O(n log n)
// Space Complexity: O(1) auxiliary space
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int product1, product2;

        sort(nums.begin(), nums.end(), greater<int>());

        int len = nums.size();

        // Three largest numbers
        product1 = nums[0] * nums[1] * nums[2];

        // Largest number and two smallest numbers
        product2 = nums[0] * nums[len - 1] * nums[len - 2];

        return max(product1, product2);
    }
};