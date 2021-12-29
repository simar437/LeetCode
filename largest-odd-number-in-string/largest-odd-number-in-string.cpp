class Solution {
public:
    string largestOddNumber(const string& num) {
        for (int i = size(num) - 1; i >= 0; i--)
        {
            if (num[i] % 2 != 0)
            {
                return num.substr(0, i + 1);
            }
        }
        return {};
    }
};