class Solution {
public:
    bool checkDivisibility(int n) {
        int a = n ;
        int temp1=n;
        int product=1;
        int sum = 0;
        int ans = 0;
        while(n>0)
        {
            temp1=n%10;
            n=n/10;
            product = product*temp1;
            sum = sum + temp1;
        }
        ans=product+sum;
        if(a%ans==0)
        {
            return true;
        }
        return false;
    }
};