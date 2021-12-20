class Solution {
public:
    int kthFactor(int n, int k) {
        int i{};
        while (k)
        {
            if (n % ++i == 0)
                k--;
            if (i > n)
                return -1;
        }
        return i;
    }
};