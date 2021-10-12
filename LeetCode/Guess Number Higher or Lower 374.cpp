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
        
        int g = guess(n);
        
        if( g == 0) return n;
        
        else if(g < 0) {
            
            while(guess(n)<0) n--;
            
        }
        
        else while(guess(n)>0) n++;
        
        
        return n;
    }
};
