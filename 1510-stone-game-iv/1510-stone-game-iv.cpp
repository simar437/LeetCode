class Solution {
    unordered_map<int, bool> m;
public:
    bool winnerSquareGame(int n) {
        auto x = sqrt(n);
        if (x == (int)x)
            return true;
        if (auto it = m.find(n); it != end(m))
            return it->second;
        for (int i = x; i > 0; i--)
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