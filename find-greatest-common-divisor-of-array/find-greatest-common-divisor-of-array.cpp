class Solution {
public:
    int findGCD(vector<int>& nums) {
        auto [min, max] = minmax_element(begin(nums), end(nums));
        return gcd(*min, *max);
    }
};