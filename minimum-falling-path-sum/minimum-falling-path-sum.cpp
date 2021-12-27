class Solution {
    map<pair<int, int>, int> m;  // row, col, MinSum
    int helper(vector<vector<int>>& matrix, int row, int col)
    {
        if (
            row >= size(matrix) ||
            col >= size(matrix[row])
            )
            return INT_MAX;
        if (auto it = m.find({ row, col }); it != end(m))
        {
            return it->second;
        }

        if (row == size(matrix[row]) - 1)
        {
            return matrix[row][col];
        }
        int ans = min({
            helper(matrix, row + 1, col + 1),
            helper(matrix, row + 1, col),
            helper(matrix, row + 1, col - 1),
            });
        m[{row, col}] = matrix[row][col] + ans;
        return matrix[row][col] + ans;
    }
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int ans{ INT_MAX };
        for (int i{}; i < size(matrix); i++)
        {
            ans = min(ans, helper(matrix, 0, i));
        }
        return ans;
    }
};