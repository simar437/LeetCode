class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<map<char, int>> v;
        for (auto& i : words)
        {
            map<char, int> m;
            for (auto& j : i)
                m[j]++;
            v.push_back(m);
        }
        vector<string> ans;
        for (auto& [key, val] : v[0])
        {
            int m{val};
            bool b{true};
            for (int j{1}; j < v.size(); j++)
            {
                if (auto x = v[j][key]; x == 0)
                {
                    b = false;
                    break;
                }
                else 
                    m = min(m, x);
            }
            if (b)
            {
                while (m--)
                    ans.emplace_back(1, key);
            }
        }
        return ans;
    }
};