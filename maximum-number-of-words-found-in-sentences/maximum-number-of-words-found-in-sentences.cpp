class Solution {
public:
    int mostWordsFound(const vector<string>& sentences) {
        int ans{};
        for (const auto& i : sentences)
        {
            int temp = count(begin(i), end(i), ' ') + 1;
            ans = max(ans, temp);
        }
        return ans;
    }
};