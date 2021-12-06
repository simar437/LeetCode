class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rows = matrix[0].size(), cols = matrix.size();
        vector<vector<int>> v(rows, vector<int>(cols));
        for (int i{}; i < rows; i++)
        {
            for (int j{}; j < cols; j++)
                v[i][j] = matrix[j][i];
        }
        return v;
    }
};