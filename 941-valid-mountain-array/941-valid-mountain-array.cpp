class Solution {
public:
    bool validMountainArray(const vector<int>& arr) {
        int n = size(arr);
        bool negativeStarted{};
        for (int i{}; i < n - 1; i++)
        {
            if (
                    arr[i] == arr[i + 1] ||
                    (arr[i] > arr[i + 1] && i == 0) || 
                    (arr[i] < arr[i + 1] && negativeStarted)
               )
                return false;
            negativeStarted = arr[i] > arr[i + 1];
        }
        return negativeStarted;
    }
};