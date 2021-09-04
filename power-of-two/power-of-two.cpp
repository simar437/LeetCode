class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n == INT_MIN)
            return false;
        bitset<32> b(n);
        return b.count() == 1;
    }
};