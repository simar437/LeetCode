class Solution {
public:
    int brokenCalc(int startValue, int target) {
        if (startValue >= target)
            return startValue - target;
        if (target % 2 == 0)
            target /= 2;
        else
            target++;
        return 1 + brokenCalc(startValue, target);
    }
};