class Solution {
    int helper(string& str)
    {
        int num{};
        for (auto& i : str)
        {
            num *= 10;
            num += i - 97;
        }
        return num;
    }
public:
    bool isSumEqual(string& firstWord, string& secondWord, string& targetWord) {
        return helper(firstWord) + helper(secondWord) == helper(targetWord);
    }
};