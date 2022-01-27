class Solution {
public:
    string makeFancyString(const string& s) {
        string ans;
        int count{};
        char ch{};
        for (const auto& i : s)
        {
            if (i == ch && count < 2)
            {
                ans += i;
                count++;
            }
            else if (i != ch)
            {
                ans += i;
                ch = i;
                count = 1;
            }
        }
        return ans;
    }
};