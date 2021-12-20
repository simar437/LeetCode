class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(begin(arr), end(arr));
        int minDiff{INT_MAX};
        vector<vector<int>> ans;
        for (int i{}; i < size(arr) - 1; i++)
        {
            if (int x = abs(arr[i] - arr[i + 1]); x < minDiff)
            {
                minDiff = x;
                ans.clear();
                ans.push_back(vector<int>{arr[i], arr[i + 1]});
            }
            else if (x == minDiff)
            {
                ans.push_back(vector<int>{arr[i], arr[i + 1]});
            }
        }
        return ans;
    }
};