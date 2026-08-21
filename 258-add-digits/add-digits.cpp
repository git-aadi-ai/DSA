class Solution {
public:
    int addDigits(int num) {
     int sum = 0;
     long long temp = 0;
     while(num!=0)
     {
        temp = num%10;
        num=num/10;
        sum=sum+temp;
        if(num==0 && sum>9)
        {
          num=sum;
          sum=0;
        }
     }   
     return sum;
    }
};