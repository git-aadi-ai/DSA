class Solution {
public:
    int arrangeCoins(int n) {
        long long k=1;
        if(n<1)
        {
          return 0;
        }
        if(n==1)
        {
            return 1;
        }
        for(int i=0;i<n;i++)
        {
            if((k*(k+1)/2)<=n)
            {
                k++;
                continue;
            }
            else
            {
                return i ;
            }
        }
        return k;
    }
};