class Solution {
public:
    string shiftingLetters(string& s, vector<int>& shifts) {
        int n = size(shifts);
        vector<long long> v(n);
        long long sum{};
        for (int i = n - 1; i >= 0; i--)
        {
            sum += shifts[i];
            v[i] = sum;
        }
        for (int i{}; i < n; i++)
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