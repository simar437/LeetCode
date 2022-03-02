class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(begin(nums), end(nums));
        for (auto& i : nums) {
            if (i < 0) {
                i = -i;
                k--;
            }
            if (k == 0) {
                break;
            }
        }
        if (k != 0 && k % 2 != 0) {
            *min_element(begin(nums), end(nums)) *= -1;
        }
        return accumulate(begin(nums), end(nums), 0);
    }
};