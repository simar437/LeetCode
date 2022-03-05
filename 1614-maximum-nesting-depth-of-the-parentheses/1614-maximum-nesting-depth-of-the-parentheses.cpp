class Solution {
public:
    int maxDepth(const string& s) {
        int ans{}, curr{};
        for (const auto& i : s) {
            if (i == '(') {
                ans = max(ans, ++curr);
            }
            if (i == ')') {
                curr--;
            }
        }
        return ans;
    }
};