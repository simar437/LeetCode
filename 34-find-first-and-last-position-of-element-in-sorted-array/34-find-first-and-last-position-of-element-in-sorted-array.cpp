class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto start = begin(nums), finish = end(nums);
        auto firstNum = lower_bound(start, finish, target);
        if (firstNum == finish || *firstNum != target)
            return {-1, -1};
        auto lastNum = upper_bound(start, finish, target);
        return {static_cast<int>(firstNum - start),
                static_cast<int>(lastNum - start - 1)};
    }
};