class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        return lower_bound(begin(nums), end(nums), target) - begin(nums);
    }
};