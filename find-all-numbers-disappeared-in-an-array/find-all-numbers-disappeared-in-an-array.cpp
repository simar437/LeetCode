class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<bool> v(n);
        for (auto& i : nums)
            v[i - 1] = true;
        nums.clear();
        for (int i{}; i < n; i++)
        {
            if (!v[i])
                nums.push_back(i + 1);
        }
        return nums;
    }
};