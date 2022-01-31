class Solution {
public:
    vector<int>& findClosestElements(vector<int>& arr, int k, int x) {
        sort(begin(arr), end(arr), [&](const auto& a, const auto& b) {
                int n1 = abs(a - x), n2 = abs(b - x);
                return n1 < n2 || (n1 == n2 && a < b);
            });
        arr.erase(begin(arr) + k, end(arr));
        sort(begin(arr), end(arr));
        return arr;
    }
};