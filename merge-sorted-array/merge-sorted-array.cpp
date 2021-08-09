class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int i{m}, j{}; j < n; i++, j++)
        {
            nums1[i] = nums2[j];
        }
        sort(begin(nums1), end(nums1));
    }
};