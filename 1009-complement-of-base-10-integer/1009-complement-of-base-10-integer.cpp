class Solution {
public:
    int bitwiseComplement(const int n) {
        if (n == 0)
            return 1;
        bitset<31> b(n);
        bool x{};
        for (int i{30}; i >= 0; i--)
        {
            if (b[i] && !x)
            {
                x = true;
            }
            if (x)
            {
                b[i] = !b[i];
            }
        }
        return b.to_ulong();
    }
};