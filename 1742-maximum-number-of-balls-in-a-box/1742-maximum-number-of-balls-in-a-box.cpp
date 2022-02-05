class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int, int> m;
        for (int i{lowLimit}; i <= highLimit; i++)
        {
            int x = i;
            int sum{};
            while (x)
            {
                sum += x % 10;
                x /= 10;
            }
            m[sum]++;
        }
        return max_element(begin(m), end(m), [](const auto& a, const auto& b){
            return a.second < b.second;
        })->second;
    }
};