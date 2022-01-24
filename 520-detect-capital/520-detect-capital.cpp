class Solution {
public:
    bool detectCapitalUse(const string& word) {
        bool allCap = isupper(word.front()), allSmall{true};
        for (int i{1}; i < size(word); i++)
        {
            auto x = isupper(word[i]);
            allCap = allCap && x;
            allSmall = allSmall && !x;
        }
        return allCap || allSmall;
    }
};