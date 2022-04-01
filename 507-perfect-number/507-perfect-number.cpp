class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum{1}, temp{num};
        for (int i{2}; i < temp; i++)
        {
            if (num % i == 0) {
                temp = num / i;
                sum += i + temp;
            }
        }
        return sum == num && num != 1;
    }
};