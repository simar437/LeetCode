#include <experimental/map>
class Solution {
public:
    int lengthOfLongestSubstring(string& str) {
        map<char, int> m;
        int ans{};
        for (int x{}; auto& i : str)
        {
            if (m.count(i))
            {
                int temp = m[i];
                experimental::erase_if(m, [&] (const auto& p) {
                    return p.second <= temp;
                });
            }
            m[i] = x++;
            ans = max(ans, static_cast<int>(m.size()));
        }
        return ans;
    }
};