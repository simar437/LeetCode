class Solution {
public:
    int smallestEqual(const vector<int>& nums) {
        for (int i{}; i < size(nums); i++) {
            if (i % 10 == nums[i])
                return i;
        }
        return -1;
    }
};