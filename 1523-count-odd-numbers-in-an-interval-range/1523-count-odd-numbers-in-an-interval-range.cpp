class Solution {
public:
    int countOdds(int low, int high) {
        int ans{};
        for (; low <= high; low++)
            ans += low % 2 != 0;
        return ans;
    }
};