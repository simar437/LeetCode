class Solution {
public:
    bool isPalindrome(int x) {
        auto str = to_string(x);
        for (int i{}, j = str.size() - 1; i <= j; i++, j--)
        {
            if (str[i] != str[j])
                return false;
        }
        return true;
    }
};