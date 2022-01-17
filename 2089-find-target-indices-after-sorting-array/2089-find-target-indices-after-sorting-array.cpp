class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        auto start = begin(nums), finish = end(nums);
        
        sort(start, finish);
        
        auto firstNum = lower_bound(start, finish, target);
        if (firstNum == finish || *firstNum != target)
            return {};
        
        auto lastNum = upper_bound(start, finish, target);
        
        
        vector<int> ans(lastNum - firstNum);
        iota(begin(ans), end(ans), firstNum - start);
        return ans;
    }
};