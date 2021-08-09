class Solution {
public:
    bool hasAlternatingBits(int n) {
        bitset<32> b(n);
        bool x{};
        for (int i{31}; i > 0 ; i--)
        {
            if (!x && b[i])
            {
                x = true;
            }
            if (x && b[i] == b[i - 1])
                return false;
        }
        return true;
    }
};