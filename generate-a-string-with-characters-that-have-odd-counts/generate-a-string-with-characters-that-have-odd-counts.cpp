class Solution {
public:
    string generateTheString(int n) {
        if (n % 2 == 0)
        {
            return string(n - 1, 'a') + 'b';
        }
        return string(n, 'a');
    }
};