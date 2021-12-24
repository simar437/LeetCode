class Solution {
    vector<vector<bool>> v;
    int ans{};
    void helper(const vector<vector<char>>& grid, int row, int col, bool b)
    {
        if (
            row >= size(grid) ||
            col >= size(grid[row]) ||
            grid[row][col] == '0' ||
            v[row][col]
           )
            return;
        v[row][col] = true;
        if (b)
            ans++;
        helper(grid, row + 1, col, false);
        helper(grid, row - 1, col, false);
        helper(grid, row, col + 1, false);
        helper(grid, row , col - 1, false);

    }
public:
    int numIslands(const vector<vector<char>>& grid) {
        int row = size(grid), col = size(grid[0]);
        v = vector(row, vector<bool>(col));
        for (int i{}; i < row; i++)
        {
            for (int j{}; j < col; j++)
            {
                helper(grid, i, j, true);
            }
        }
        return ans;
    }
};