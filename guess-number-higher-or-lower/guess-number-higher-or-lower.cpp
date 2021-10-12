/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
    
public:
    int guessNumber(int n) {
        double min{};
        while (true)
        {
            int mid = ceil((n + min) / 2);
            if (int x = guess(mid); x == 0)
            {
                return mid;
            }
            else if (x == -1)
            {
                n = mid;
            }
            else
            {
                min = mid;
            }
        }
        return min;
    }
};