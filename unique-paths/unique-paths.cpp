class Solution {
    map<pair<int, int>, int> dp;
public:
    int uniquePaths(int m, int n) {
        if (m == 1 || n == 1)
            return 1;
        if (auto it = dp.find({ m, n }); it != dp.end())
            return it->second;
        int ans = uniquePaths(m - 1, n) + uniquePaths(m, n - 1);
        dp[{m, n}] = ans;
        return ans;
    }
};