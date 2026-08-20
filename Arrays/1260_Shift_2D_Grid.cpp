#include <bits/stdc++.h>
using namespace std;

// LeetCode #1260 - Shift 2D Grid
//
// Approach:
// Treat the 2D grid as a 1D array using indices.
// For every element, calculate its old 1D index and its new index
// after shifting by k positions.
// Convert the new 1D index back into row and column coordinates.
//
// Time Complexity: O(m * n)
// Space Complexity: O(m * n)
// where m is the number of rows and n is the number of columns.

class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int newrow, newcol;

        int cols = grid[0].size();
        int row = grid.size();

        vector<vector<int>> ans(row, vector<int>(cols));

        int total = row * cols;
        int oldidx, newidx;

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {

                oldidx = i * cols + j;

                newidx = (oldidx + k) % total;

                newrow = newidx / cols;
                newcol = newidx % cols;

                ans[newrow][newcol] = grid[i][j];
            }
        }

        return ans;
    }
};