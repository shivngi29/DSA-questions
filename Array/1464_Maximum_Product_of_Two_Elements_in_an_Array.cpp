#include <bits/stdc++.h>
using namespace std;

// LeetCode #1464 - Maximum Product of Two Elements in an Array
//
// Approach:
// Sort the array in descending order.
// The two largest elements will produce the maximum product.
// Subtract 1 from each of them and multiply.
//
// Time Complexity: O(n log n)
// Space Complexity: O(1) auxiliary space

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());

        return (nums[0] - 1) * (nums[1] - 1);
    }
};