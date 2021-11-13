class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<int> s;
        int n = temp.size();
        vector<int> ans(n);
        for (int i{}; i < n; i++)
        {
            int x{};
            while (!s.empty())
            {
                x = s.top();
                if (temp[x] < temp[i])
                {
                    ans[x] = i - x;
                    s.pop();
                }
                else
                {
                    break;
                }
            }
            s.push(i);
        }
        return ans;
    }
};