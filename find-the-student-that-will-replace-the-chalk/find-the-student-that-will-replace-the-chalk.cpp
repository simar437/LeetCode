class Solution {
public:
    int chalkReplacer(const vector<int>& chalk, int k) {
        k %= accumulate(begin(chalk), end(chalk), 0LL);
        for (int i{}; i < size(chalk); i++)
        {
            if (chalk[i] > k)
                return i;
            k -= chalk[i];
        }
        return -1;
    }
};