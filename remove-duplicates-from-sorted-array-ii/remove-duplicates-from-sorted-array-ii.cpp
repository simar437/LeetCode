class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        pair<int, int> p{};
        auto start{begin(nums)};
        for (int i{}; i < nums.size(); i++)
        {
            if (p.first != nums[i])
            {
                p.first = nums[i];
                p.second = 1;
            }
            else if (p.second + 1 >= 3)
            {
                nums.erase(start + i--);
            }
            else
            {
                p.second++;
            }
        }
        return nums.size();
    }
};