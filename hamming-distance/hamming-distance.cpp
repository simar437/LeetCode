class Solution {
public:
    int hammingDistance(int x, int y) {
        bitset<31> b1(x), b2(y);
        int count{};
        for (int i{}; i < 31; i++)
        {
            count += b1[i] != b2[i];
        }
        return count;
    }
};