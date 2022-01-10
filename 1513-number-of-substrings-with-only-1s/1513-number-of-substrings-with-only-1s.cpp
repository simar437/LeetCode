class Solution {
public:
    int numSub(const string& s) {
        bool prevTrue{};
        long long ans{}, n{};
        for (const auto& i : s)
        {
            if (i == '1')
            {
                ans += ++n;
            }
            else
            {
                n = 0;
            }
        }
        return ans % 1000000007;
    }
};