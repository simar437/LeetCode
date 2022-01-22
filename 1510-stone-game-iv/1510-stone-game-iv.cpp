class Solution {
    unordered_map<int, bool> m;
public:
    bool winnerSquareGame(int n) {
        if (auto x = sqrt(n); x == (int)x)
            return true;
        if (auto it = m.find(n); it != end(m))
            return it->second;
        for (int i{1}; i * i <= n; i++)
        {
            if (!winnerSquareGame(n - i * i))
            {
                m[n] = true;
                return true;
            }
        }
        m[n] = false;
        return false;
    }
};