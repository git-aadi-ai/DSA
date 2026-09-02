class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int k=flowerbed.size();
        if(k==1 && flowerbed[0]==0)
        {
           n--;
        }
       else
       {
        if(flowerbed[0]==0 && flowerbed[1]==0)
        {
            flowerbed[0]=1;
            n--;
        }
        for(int i=1;i<k-1;i++)
        {
            if(flowerbed[i-1]==0 && flowerbed[i+1]==0 && flowerbed[i]!=1)
            {
                flowerbed[i]=1;
                n--;
            }
            else
            {
                continue;
            }
        }
        if(flowerbed[k-1]==0 && flowerbed[k-2]==0)
        {
            flowerbed[k-1]=1;
            n--;
        }
       } 
        if(n>0)
        {
            return false;
        }
        return true;
    }
};