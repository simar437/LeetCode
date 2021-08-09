class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int x{};
        for (int i{}; i < arr.size(); i++)
        {
            if (arr[i] % 2 != 0)
            {
                if (++x == 3)
                    return true;
            }
            else
                x = 0;
        }
        return false;
    }
};