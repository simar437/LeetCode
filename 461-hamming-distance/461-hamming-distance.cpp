class Solution {
public:
    int hammingDistance(const int x, const int y) {
        return bitset<31>(x ^ y).count();
    }
};