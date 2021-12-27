class Solution {
public:
    int maximumWealth(const vector<vector<int>>& accounts) {
        int ans{};
        for (const auto& i : accounts)
        {
            ans = max(ans, accumulate(begin(i), end(i), 0));
        }
        return ans;
    }
};