class Solution {
public:
    int findJudge(int N, vector<vector<int>>& t) {
        if (t.size() == 0 )
        {
            return N == 1 ? 1 : -1;
        }
        map<int, int> m1, m2;
        for (auto& i : t)
        {
            m1[i[0]]++;
            m2[i[1]]++;
        }
        auto&& [highest, count] = *max_element(m2.begin(), m2.end(), [](auto& p1, auto& p2){
            return p1.second < p2.second;
        });
        return m1[highest] == 0 && count == N - 1 ? highest : -1;
        
    }
};