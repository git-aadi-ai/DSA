class Solution {
public:
    bool judgeSquareSum(int c) {
        long long i = 0;
        long long j = sqrt(c);
        while(i<=j)
        {
            long long res = i*i + j*j ;
            if(res==c)
            {
                return true;
            }
            else if(res < c)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return false;
    }
};