class Solution {
    vector<bool> v;
    bool helper(vector<int>& arr, int start) {
        if (start < 0 || start >= arr.size() || v[start])
            return false;
        v[start] = true;
        if (arr[start] == 0)
            return true;
        return helper(arr, start + arr[start]) ||
               helper(arr, start - arr[start]);
    }
public:
    bool canReach(vector<int>& arr, int start) {
        v = vector<bool>(arr.size());
        return helper(arr, start);
    }
};