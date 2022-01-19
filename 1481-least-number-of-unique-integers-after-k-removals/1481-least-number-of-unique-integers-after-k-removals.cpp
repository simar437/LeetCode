class Solution {
public:
    int findLeastNumOfUniqueInts(const vector<int>& arr, int k) {
        unordered_map<int, int> m;
        for (const auto& i : arr)
            m[i]++;
        vector<pair<int, int>> v(begin(m), end(m));
        sort(begin(v), end(v), [](const auto& a, const auto& b){
            return a.second < b.second;
        });
        int removed{};
        for (const auto& [_, count] : v)
        {
            if (count <= k)
            {
                k -= count;
                removed++;
            }
            else
                break;
        }
        return size(v) - removed;
    }
};