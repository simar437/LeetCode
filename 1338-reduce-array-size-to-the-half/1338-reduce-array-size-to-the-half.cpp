class Solution {
public:
    int minSetSize(const vector<int>& arr) {
        unordered_map<int, int> m;
        for (const auto& i : arr)
            m[i]++;
        vector<pair<int, int>> v(begin(m), end(m));
        sort(begin(v), end(v), [](const auto& a, const auto& b) {
            return a.second > b.second;
        });
        int ans{};
        int n = size(arr);
        for (const auto& [_, count] : v)
        {
            if (n <= size(arr) / 2)
                break;
            n -= count;
            ans++;
        }
        return ans;
    }
};