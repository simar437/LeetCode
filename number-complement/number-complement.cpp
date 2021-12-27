class Solution {
public:
    int findComplement(int num) {
      bitset<31> b(num);
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