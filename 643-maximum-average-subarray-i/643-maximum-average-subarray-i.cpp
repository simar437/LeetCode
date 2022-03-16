class Solution {
public:
    double findMaxAverage(const vector<int>& nums, const double k) {
        const int n = size(nums);
        int sum = accumulate(begin(nums), begin(nums) + k, 0);
        auto ans = sum / k;
        for (int i{}; i + k < n; i++) {
            sum += nums[i + k];
            sum -= nums[i];
            ans = max(ans, sum / k);
        }
        return ans;
    }
};