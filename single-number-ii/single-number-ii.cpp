class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> m;
        for (auto& i : nums)
        {
            if (++m[i] == 3)
            {
                m.erase(i);
            }
        }
        return m.begin()->first;
    }
};