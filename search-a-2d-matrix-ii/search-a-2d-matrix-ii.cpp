class Solution {
public:
    bool searchMatrix(const vector<vector<int>>& matrix, const int target) {
        for (const auto& i : matrix)
        {
            if (i.front() > target)
                return false;
            if (binary_search(begin(i), end(i), target))
                return true;
        }
        return false;
    }
};