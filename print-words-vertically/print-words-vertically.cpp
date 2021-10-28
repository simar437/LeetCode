class Solution {
    void rtrim(string &s) {
    s.erase(find_if(s.rbegin(), s.rend(), [](auto& ch) {
        return !isspace(ch);
    }).base(), s.end());
}
public:
    vector<string> printVertically(string& s) {
        vector<string_view> v;
        auto n{ s.size() };
        int maxSize{};
        
        for (int i{}, j{}; i <= n; i++)
        {
            if (i == n || s[i] == ' ')
            {
                auto x = i - j;
                v.emplace_back(&s[j], x);
                maxSize = max(maxSize, x);
                j = ++i;
            }
        }
        
        
        n = v.size();
        vector<string> ans(maxSize);
        for (int i{}; i < maxSize; i++)
        {

            for (int j{}; j < n; j++)
            {
                ans[i] += v[j].size() > i ? v[j][i] : ' ';
            }
        }
        for (auto& i : ans)
        {
            rtrim(i);
        }
        return ans;
    }
};