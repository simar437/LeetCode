class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        unsigned long long num = mass;
        sort(begin(asteroids), end(asteroids));
        int last = asteroids.back();
        for (const auto& i : asteroids)
        {
            if (num >= last)
                break;
            if (num < i)
                return false;
            num += i;
        }
        return true;
    }
};