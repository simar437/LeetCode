class Solution {
    struct pair_hash {
    template <typename T1, typename T2>
    size_t operator() (const pair<T1,T2> &p) const {
            auto h1 = hash<T1>{}(p.first);
            auto h2 = hash<T2>{}(p.second);
            return h1 ^ h2;
        }
    };
    unordered_map<pair<int, int>, int, pair_hash> m;
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