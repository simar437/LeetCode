class Solution {
public:
    int myAtoi(string s) {
        long long ans{};
        bool numStarted{}, isNegative{};
        for (int i{}; i < size(s); i++)
        {
            if (ans > INT_MAX)
                break;
            
            if (!numStarted && s[i] == ' ' );
            
            else if (!numStarted && s[i] == '-')
            {
                isNegative = true;
                numStarted = true;
            }
            else if (!numStarted && s[i] == '+')
            {
                numStarted = true;
            }
            else if (isdigit(s[i]))
            {
                ans *= 10;
                ans += s[i] - '0';
                numStarted = true;
            }
            else
            {
                break;
            }
        }
        if (isNegative && ans - 1 >= INT_MAX)
                return INT_MIN;
        if (ans > INT_MAX)
                return INT_MAX;
        return isNegative ? -ans : ans;
    }
};