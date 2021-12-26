class Solution {
public:
    bool reorderedPowerOf2(int n) {
        auto x = to_string(n);
        sort(begin(x), end(x));
        do {
            if (x.front() == '0')
                continue;
            auto num = bitset<31>(stoi(x));
            bool b{};
            for (int i{30}; i >= 0; i--)
            {
                if (num[i] && b)
                {
                    b = false;
                    break;
                }
                else if (num[i] && !b)
                {
                    b = true;
                }
            }
            if (b)
                return true;
        } while(next_permutation(begin(x), end(x)));
        return false;
    }
};