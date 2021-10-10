class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int ans{left};
        for (long i{left}; i <= right && ans > 0; i++)
        {
            ans &= i;
        }
        return ans;
    }
};