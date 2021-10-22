class Solution {
public:
    vector<int>& shuffle(vector<int>& nums, int n) {
        vector<int> v;
        v.reserve(2 * n);
        for (int i{}, j{n}; j < 2 * n; i++, j++)
        {
            v.push_back(nums[i]);
            v.push_back(nums[j]);
        }
        nums = v;
        return nums;
    }
};