#include <bits/stdc++.h>
using namespace std;

// LeetCode #14 - Longest Common Prefix
//
// Approach:
// Use the first string as a reference.
// Compare each character of the first string with the corresponding
// character of every other string.
// If a mismatch is found or a string ends, return the prefix found so far.
//
// Time Complexity: O(n * m)
// Space Complexity: O(1) auxiliary space
// where n is the number of strings and m is the length of the shortest string.

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string first = strs[0];

        for (int i = 0; i < first.size(); i++) {
            for (int j = 0; j < strs.size(); j++) {

                if (i == strs[j].size() || strs[j][i] != first[i]) {
                    return first.substr(0, i);
                }
            }
        }

        return first;
    }
};