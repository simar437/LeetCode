class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto start = begin(nums), finish = end(nums);
        
        
        auto firstNum = lower_bound(start, finish, target);
        if (firstNum == finish || *firstNum != target)
            return {-1, -1};
        
        auto lastNum = upper_bound(start, finish, target);
        
        vector<int> ans(2);
        ans[0] = firstNum - start;
        ans[1] = lastNum - start - 1;
        
        return ans;
    }
};