class Solution {
public:
    int numberOfMatches(const int n) {
        if (n <= 2)
            return n - 1;
        if (n % 2 == 0)
            return (n / 2) + numberOfMatches(n / 2);
        return (n - 1) / 2 + numberOfMatches((n - 1) / 2 + 1);
    }
};