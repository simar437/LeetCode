class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(begin(asteroids), end(asteroids));
        int last = asteroids.back();
        for (const auto& i : asteroids)
        {
            if (mass >= last)
                break;
            if (mass < i)
                return false;
            mass += i;
        }
        return true;
    }
};