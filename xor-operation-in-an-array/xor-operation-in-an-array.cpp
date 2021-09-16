class Solution {
public:
    int xorOperation(int n, int start) {
        int ans{};
        for (int i{}; i < n; i++)
        {
            ans ^= start + 2 * i;
        }
        return ans;
    }
};