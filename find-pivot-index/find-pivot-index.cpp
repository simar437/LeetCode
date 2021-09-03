class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        partial_sum(begin(nums), end(nums), begin(nums));
        int prev{};
        int x = nums.back();
        for (int i{}; i < nums.size(); i++)
        {
            if (x - nums[i] == prev)
                return i;
            prev = nums[i];
        }
        return -1;
    }
};