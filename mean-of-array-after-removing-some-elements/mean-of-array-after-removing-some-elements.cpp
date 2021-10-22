class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(begin(arr), end(arr));
        int n = arr.size();
        double remove = 5.0 / 100 * n;
        double sum{};
        for (int i = remove; i < n - remove; i++)
            sum += arr[i];
        return sum / (n - 2 * remove);
    }
};