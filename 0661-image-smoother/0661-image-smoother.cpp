class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        const int n = size(img);
        const int m = size(img.front());
        vector<vector<int>> ans(n, vector<int>(m));
        
        for (int i{}; i < n; i++) {
            for (int j{}; j < m; j++) {
                int count{};
                int sum{};
                for (int a{i - 1}; a <= i + 1; a++) {
                    for (int b{j - 1}; b <= j + 1; b++) {
                        if (a >= 0 && a < n && b >= 0 && b < m) {
                            sum += img[a][b];
                            count++;
                        }
                    }
                }
                ans[i][j] = sum / count;
            }
        }
        return ans;
    }
};