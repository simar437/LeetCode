class Solution {
public:
    int secondHighest(const string& s) {
        array<int, 10> arr{};
        for (const auto& i : s)
        {
            if (isdigit(i))
            {
                arr[i - '0']++;
            }
        }
        bool second{};
        for (int i{9}; i >= 0; i--)
        {
            if (arr[i])
            {
                if (second)
                    return i;
                second = true;
            }
        }
        return -1;
    }
};