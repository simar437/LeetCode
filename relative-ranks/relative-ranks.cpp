class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        map<int, int, greater<int>> m;
        for (int i{}; i < score.size(); i++)
        {
            m[score[i]] = i;
        }
        vector<string> ans(score.size());
        array position{"Gold Medal","Silver Medal","Bronze Medal"};
        for (int x{1}; auto& i : m)
        {
            ans[i.second] = x <= 3 ? position[x - 1] : to_string(x);
            x++;
        }
        return ans;
    }
};