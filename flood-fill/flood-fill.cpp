class Solution {
    int prev, newColor;
    vector<vector<bool>> v;
    void helper(vector<vector<int>>& image, int sr, int sc)
    {
        if (sr >= image.size() ||
            sr < 0 ||
            sc >= image[sr].size() ||
            sc < 0 ||
            image[sr][sc] != prev || 
            v[sr][sc])
        {
            return;
        }
        image[sr][sc] = newColor;
        v[sr][sc] = true;
        helper(image, sr + 1, sc);
        helper(image, sr - 1, sc);
        helper(image, sr, sc + 1);
        helper(image, sr , sc - 1);
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        newColor = color;
        prev = image[sr][sc];
        v = vector<vector<bool>>(image.size(), vector<bool>(image[0].size()));
        helper(image, sr, sc);
        return image;
    }
};