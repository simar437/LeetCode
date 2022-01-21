class Solution {
public:
    bool lemonadeChange(const vector<int>& bills) {
        array<int, 3> arr{};
        for (const auto& i : bills)
        {
            if (i == 5)
                arr[0]++;
            else if (i == 10 && arr[0] >= 1)
            {
                arr[0]--;
                arr[1]++;
            }
            else if (i == 20)
            {
                if (arr[1] >= 1 && arr[0] >= 1)
                {
                    arr[2]++;
                    arr[0]--;
                    arr[1]--;
                }
                else if (arr[0] >= 3)
                {
                    arr[0] -= 3;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};