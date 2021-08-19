class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count{}, ans{};
        for (auto& i : nums)
        {
           if (i == 1)
           {
               count++;
               ans = max(ans, count);
           }
           else
           {
               count = 0;
           }
        }
        return ans;
    }
};