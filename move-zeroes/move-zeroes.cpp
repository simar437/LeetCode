class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        auto start = nums.begin();
        for(int i{}; i < n; i++)
        {
            if(nums[i] == 0)
            {
                nums.erase(start + i--);
                nums.emplace_back();
                n--;
            }
        }
    }
};