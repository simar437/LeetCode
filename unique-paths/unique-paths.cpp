class Solution {
    map<set<int>, int> memo;
public:
    int uniquePaths(int m, int n) {
        set<int> x{m, n};
        if (memo.find(x) != memo.end())
            return memo[x];
        if (m == 1 && n == 1)
            return 1;
        if (m == 0 || n == 0)
            return 0;
        memo[x] = uniquePaths(m, n - 1) + uniquePaths(m - 1, n);
        return memo[x];
    }
};