class Solution {
public:
     long fun(vector<int>arr,int n, int mid)
        {
            long khour = 0;
            for(int i=0;i<n;i++)
            {
                khour = khour + arr[i]/mid;
                if(arr[i]%mid!=0)
                {
                    khour++;
                }
            }
            return khour;
        }
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int n = piles.size();
        int low = 1;
        int high = piles[n-1];
        int res = 0;
        while(low<=high)
        {
            int mid = (low+high)/2;
            long khour = fun(piles,n,mid);
            if(khour>h)
            {
                low = mid+1;
            }
            else
            {
              res = mid;
              high = mid-1;
            }
        }
        return res ; 
    }
};