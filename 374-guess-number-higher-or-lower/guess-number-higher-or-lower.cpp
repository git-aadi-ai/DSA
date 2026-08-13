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
        long low = 0 ;
        long high =  n ;
        long res = 0;
        while(low<=high)
        {
            long mid = (low + high)/2;
            int a = guess(mid);
            if(a == -1)
            {
               high = mid-1;
            }
            else if(a == 1)
            {
                low = mid + 1;
        
            }
            else 
            {
               return mid;
            }
        }
        return res ;
    }
};