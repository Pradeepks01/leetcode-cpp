// Guess Number Higher or Lower


/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int l = 1, r = n; // Search range is from 1 to n (inclusive)
        
        while (true) {
            // Prevent integer overflow: use (l + (r - l) / 2)
            int m = l + (r - l) / 2;

            int res = guess(m); // Call guess API with current mid value

            if (res > 0) {
                // m is lower than the pick (guess is too small)
                // So we move the left boundary up
                l = m + 1;
            } else if (res < 0) {
                // m is higher than the pick (guess is too big)
                // So we move the right boundary down
                r = m - 1;
            } else {
                // res == 0, we guessed the number!
                return m;
            }
        }
    }
};
