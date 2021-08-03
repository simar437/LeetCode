class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        array<set<char>, 9> cols;
        array<array<set<char>, 3>, 3> box;
        for (int i{}; i < 9; i++)
        {
            set<char> row;
            for (int j{}; j < 9; j++)
            {
                char x = board[i][j];
                if (x != '.')
                {
                    if (!row.insert(x).second ||
                        !cols[j].insert(x).second ||
                        !box[i / 3][j / 3].insert(x).second)
                    {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};