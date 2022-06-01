class Solution {
    unordered_map<int, int> m;
    void helper(vector<int>& nums) {
        unordered_set<int> s(begin(nums), end(nums));
        for (const auto& i : s) {
            m[i]++;
        }
    }
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        helper(nums1);
        helper(nums2);
        helper(nums3);
        vector<int> ans;
        for (const auto& [num, count] : m) {
            if (count >= 2) {
                ans.push_back(num);
            }
        }
        return ans;
    }
};