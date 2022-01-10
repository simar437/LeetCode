class Solution {
public:
    int numSub(const string& s) {
        bool prevTrue{};
        long long ans{}, n{};
        for (const auto& i : s)
        {
            n = (i == '1') * ++n;
            ans += n;
        }
        return ans % 1000000007;
    }
};