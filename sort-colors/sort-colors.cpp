class Solution {
    public:
    void sortColors(std::vector<int>& nums) {
        array<int, 3> arr{};
        for (auto& i : nums) {
            arr[i]++;
        }
        for (int i{}, x{}; i < 3; i++) {
            while (arr[i]--) {
                nums[x++] = i;
            }
        }
    }
};