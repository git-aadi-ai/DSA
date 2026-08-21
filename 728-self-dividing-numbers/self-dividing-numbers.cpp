class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++)
        {
            int a = i ;
            int temp = 0;
            bool bool1=true;
            while(a!=0)
            {
                temp=a%10;
                if(temp == 0 )
                {
                    bool1=false;
                    break;
                }
                if(i%temp==0)
                {
                    a=a/10;
                }
                else
                {
                    bool1=false;
                    break;
                }
            }
            if(bool1==false)
            {
                continue;
            }
            else
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};