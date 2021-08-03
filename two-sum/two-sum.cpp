class Solution {
public:
    vector<int> twoSum(vector<int>& v, int t) {
        map<int, int> m;
        for (int x{}; auto& i : v)
        {
            m[t - i] = x++; 
        }
        for (int x{}; auto& i : v)
        {
            if (m[i] != 0 && m[i] != x)
            {
                return {x, m[i]};
            }
            x++;
        }
        return {};
    }
};