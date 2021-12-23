class Solution {
public:
    bool uniqueOccurrences(const vector<int>& arr) const {
        unordered_map<int, int> m;
        for (const auto& i : arr)
            m[i]++;
        unordered_set<int> s;
        for (const auto& [_, count] : m)
        {
            if (!s.insert(count).second)
                return false;
        }
        return true;
    }
};