class Solution {
    bool isPalindrome(const string& s)
    {
        for (int i{}, j = size(s) - 1; i < j; i++, j--)
        {
            if (s[i] != s[j])
                return false;
        }
        return true;
    }
public:
    string firstPalindrome(const vector<string>& words) {
        for (const auto& i : words)
            if (isPalindrome(i))
                return i;
        return {};
    }
};