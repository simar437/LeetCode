class Solution {
public:
    string shiftingLetters(string& s, vector<int>& shifts) {
        vector<long long> v(shifts.begin(), shifts.end());
        partial_sum(rbegin(v), rend(v), rbegin(v));
        for (int i{}; i < shifts.size(); i++)
        {
            int temp = v[i] % 26;
            if (static_cast<int>(s[i]) + temp > 'z')
            {
                s[i] -= 26;
            }
            s[i] += temp;
        }
        return s;
    }
};