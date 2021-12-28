class Solution {
public:
    int countWords(const vector<string>& words1, const vector<string>& words2) {
        unordered_map<string_view, int> m1, m2;
        for (const auto& i : words1)
        {
            m1[i]++;
        }
        for (const auto& i : words2)
        {
            m2[i]++;
        }
        int ans{};
        for (const auto& [key, count] : m1)
        {
            if (count == 1 && m2[key] == 1)
                ans++;
        }
        return ans;
    }
};