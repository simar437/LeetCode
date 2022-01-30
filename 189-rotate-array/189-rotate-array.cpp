class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        std::rotate(rbegin(nums), rbegin(nums) + k, rend(nums));
    }
};