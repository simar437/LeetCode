class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        const int n = size(grid);
        const int m = size(grid.front());
        vector<int> row(n);
        vector<int> col(m);
        for (int i{}; i < n; i++) {
            for (int j{}; j < m; j++) {
                if (grid[i][j] == 1) {
                    row[i]++;
                    col[j]++;
                }
            }
        }
        vector<vector<int>> ans(n, vector<int>(m));
        for (int i{}; i < n; i++) {
            for (int j{}; j < m; j++) {
                ans[i][j] = row[i] + col[j] - (n - row[i]) - (m - col[j]);
            }
        }
        return ans;
    }
};