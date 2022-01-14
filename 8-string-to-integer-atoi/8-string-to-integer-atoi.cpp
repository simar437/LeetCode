class Solution {
public:
    int myAtoi(const string& s) {
        long long ans{};
        bool numStarted{}, isNegative{};
        for (const auto& i : s)
        {
            if (ans > INT_MAX)
                break;
            
            if (!numStarted && i == ' ' );
            
            else if (!numStarted && i == '-')
            {
                isNegative = true;
                numStarted = true;
            }
            else if (!numStarted && i == '+')
            {
                numStarted = true;
            }
            else if (isdigit(i))
            {
                ans *= 10;
                ans += i - '0';
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