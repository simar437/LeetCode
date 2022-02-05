class Solution {
public:
    string kthDistinct(const vector<string>& arr, int k) {
        unordered_map<string_view, int> m;
        for (const auto& i : arr)
        {
            m[i]++;
        }
        for (const auto& i : arr)
        {
            if (m[i] == 1)
                k--;
            if (k == 0)
                return i;
        }
        return "";
    }
};