class Solution {
public:
    bool makeEqual(const vector<string>& words) {
        unordered_map<char, int> m;
        for (const auto& i : words)
            for (const auto& j : i)
                m[j]++;
        int n = size(words);
        for (const auto& [_, count] : m)
            if (count % n != 0)
                return false;
        return true;
    }
};