#include <bits/stdc++.h>
using namespace std;

// LeetCode #242 - Valid Anagram
//
// Approach:
// Sort both strings and compare them.
// If the sorted strings are identical, they contain the same
// characters with the same frequencies and are therefore anagrams.
//
// Time Complexity: O(n log n)
// Space Complexity: O(1) auxiliary space
// (Ignoring the space used internally by the sorting algorithm.)

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if (s.length() != t.length() || s != t) {
            return false;
        }

        return true;
    }
};