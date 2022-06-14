class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int, int> m;
        for (const auto& i : arr) {
            m[i];
        }
        for (int x{1}; auto& i : m) {
            i.second = x++;
        }
        for (auto& i : arr) {
            i = m[i];
        }
        return arr;
    }
};