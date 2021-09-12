class Solution {
    bool isPalindrome(string s)
    {
        int n = s.size();
        for (int i{}; i < n / 2 + 1; i++)
        {
            if (s[i] != s[n - i - 1])
                return false;
        }
        return true;
    }
public:
    int countSubstrings(string& s) {
        int ans, n;
        ans = n = s.size();
        for (int i{}; i < n; i++)
        {
            for (int j{i + 1}; j < n; j++)
            {
                ans += isPalindrome(s.substr(i, j - i + 1));
            }
        }
        return ans;
    }
};