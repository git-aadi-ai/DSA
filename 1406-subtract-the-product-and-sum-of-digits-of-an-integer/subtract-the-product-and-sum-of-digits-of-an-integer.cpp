class Solution {
public:
    int subtractProductAndSum(int n) {
       int temp1 = 0;
       int temp2 = 0;
       int product = 1;
       int sum = 0;
       while(n!=0)
       {
         temp1=n%10;
         temp2=n%10;
         n=n/10;
         product = product * temp1;
         sum = sum + temp2;
       } 
       int ans = product - sum ;
       return ans;
    }
};