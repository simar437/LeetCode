class Solution {
public:
    string convertToTitle(int num) {
        string ans;
        while (num)
        {
            int t = num % 26;
            ans = static_cast<char>('@' + (t != 0 ? t : 26)) + ans;
            if (auto x = num / 26.0; x == int(x))
            {
                num = x - 1;
                continue;
            }
            num /= 26;
        }
        return ans;
    }
};