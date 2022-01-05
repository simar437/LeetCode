class Solution {
    map<pair<int, int>, int> m;
    int helper(const vector<vector<int>>& grid, int row = 0, int col = 0)
    {
        if (
                row >= size(grid) ||
                col >= size(grid[row]) ||
                grid[row][col] == 1
           )
        {
            return 0;
        }
        if (row == size(grid) - 1 && col == size(grid[row]) - 1)
        {
            return 1;
        }
        if (auto it = m.find({row, col}); it != end(m))
        {
            return it->second;
        }
        auto x = helper(grid, row + 1, col) + helper(grid, row, col + 1);
        m[{row, col}] = x;
        return x;
    }
public:
    int uniquePathsWithObstacles(const vector<vector<int>>& obstacleGrid) {
        return helper(obstacleGrid);
    }
};