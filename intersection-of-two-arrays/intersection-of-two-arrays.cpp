class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s;
        sort(begin(nums1), end(nums1));
        sort(begin(nums2), end(nums2));
        set_intersection(begin(nums1), end(nums1),
                        begin(nums2), end(nums2),
                        inserter(s, end(s)));
        return vector<int>(begin(s), end(s));
    }
};