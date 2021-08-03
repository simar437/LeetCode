class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        map<int, int> m;
        for (int x{1}; auto& i : n)
        {
            if (m[i] != 0)
            {
                return {x - 1, m[i] - 1};
            }
            m[t - i] = x++;
        }
        return vector<int>();
    }
};