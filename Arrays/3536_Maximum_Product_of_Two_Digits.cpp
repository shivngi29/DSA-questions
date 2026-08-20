#include <bits/stdc++.h>
using namespace std;

// LeetCode #3536 - Maximum Product of Two Digits
//
// Approach:
// Extract all the digits from the given number and store them in a vector.
// Sort the digits in descending order.
// The product of the two largest digits gives the maximum product.
//
// Time Complexity: O(d log d)
// Space Complexity: O(d)
// where d is the number of digits in n.

class Solution {
public:
    int maxProduct(int n) {
        vector<int> v;

        while (n > 0) {
            int z = n % 10;
            v.push_back(z);
            n = n / 10;
        }

        sort(v.begin(), v.end(), greater<int>());

        return v[0] * v[1];
    }
};