// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int max) {
        int min{};
        while (min < max - 1)
        {
            int mid = (static_cast<long>(max) + min) / 2;
            if (isBadVersion(mid))
            {
                max = mid;
            }
            else
            {
                min = mid;
            }
        }
        return max;
    }
};