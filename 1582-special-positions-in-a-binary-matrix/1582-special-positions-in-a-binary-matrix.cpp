class Solution {
public:
    int numSpecial(const vector<vector<int>>& mat) {
        const int n = size(mat);
        const int m = size(mat.front());
        vector<int> row(n);
        vector<int> col(m);
        for (int i{}; i < n; i++) {
            for (int j{}; j < m; j++) {
                if (mat[i][j] == 1) {
                    row[i]++;
                    col[j]++;
                }
            }
        }
        int ans{};
        for (int i{}; i < n; i++) {
            for (int j{}; j < m; j++) {
                if (mat[i][j] == 1 && row[i] == 1 && col[j] == 1) {
                    ans++;
                }
            }
        }
            
        return ans;
    }
};