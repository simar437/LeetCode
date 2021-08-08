class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int, int> m;
        for (auto& i :nums)
        {
            if (++m[i] >= 2)
                m.erase(i);
        }
        return {m.begin()->first, prev(m.end())->first};
    }
};