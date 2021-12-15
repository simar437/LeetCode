class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int x{}, ans{};
        for (auto& i : gain)
        {
            x += i;
            ans = max(ans, x);
        }
        return ans;
    }
};