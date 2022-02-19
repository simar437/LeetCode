class Solution {
public:
    int canBeTypedWords(const string& text, const string& brokenLetters) {
        unordered_set<char> s(begin(brokenLetters), end(brokenLetters));
        bool canType{true};
        int ans{};
        for (const auto& i : text)
        {
            if (s.count(i))
            {
                canType = false;
            }
            if (i == ' ')
            {
                ans += canType;
                canType = true;
            }
        }
        return ans + canType;
    }
};