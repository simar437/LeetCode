class Solution {
public:
    bool checkZeroOnes(const string& s) {
        int maxOne{}, maxZero{};
        int countOne{}, countZero{};
        for (const auto& i : s)
        {
            if (i == '1')
            {
                countZero = 0;
                countOne++;
                maxOne = max(maxOne, countOne);
            }
            else
            {
                countOne = 0;
                countZero++;
                maxZero = max(maxZero, countZero);
            }
        }
        return maxOne > maxZero;
    }
};