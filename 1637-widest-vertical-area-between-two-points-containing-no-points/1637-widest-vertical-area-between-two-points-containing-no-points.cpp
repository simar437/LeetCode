class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        set<int> nums;
        for (const auto& i : points) {
            nums.insert(i[0]);
        }
        
        int prev = *nums.begin();
        int distance{};
        for (const auto& i : nums) {
            distance = max(distance, i - prev);
            prev = i;
        }
        return distance;
    }
};