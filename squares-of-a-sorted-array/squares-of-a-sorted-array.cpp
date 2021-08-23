class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for (auto& i : nums)
        {
            i *= i;
        }
        sort(begin(nums), end(nums));
        return nums;
    }
};