class Solution {
public:
    int titleToNumber(const string& c) {
        int res{};
        for (const auto& i : c)
        {
            res = (res * 26) + (i - 64);
        }
        return res;
    }
};