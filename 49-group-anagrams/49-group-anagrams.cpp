class Solution {
public:
    vector<vector<string>> groupAnagrams(const vector<string>& strs) {
        map<map<char, int>, vector<string>> m;
        for (const auto& i : strs)
        {
            map<char, int> t;
            for (const auto& j : i)
            {
                t[j]++;
            }
            m[t].push_back(i);
        }
        vector<vector<string>> ans;
        for (const auto& [_, v] : m)
        {
            ans.push_back(v);
        }
        return ans;
    }
};