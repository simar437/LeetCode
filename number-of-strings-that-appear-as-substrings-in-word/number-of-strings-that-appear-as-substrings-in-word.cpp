class Solution {
public:
    int numOfStrings(const vector<string>& patterns, const string& word) {
        int ans{};
        for (const auto& i : patterns)
        {
            ans += word.find(i) != string::npos;
        }
        return ans;
    }
};