class Solution {
public:
    bool fun (vector<int>arr , int mid , int n , int k)
    {
        int stud = 1 ;
        int pages = 0;
        for(int i = 0 ;i<n;i++)
        {
            if((pages+arr[i])<=mid)
            {
                pages = pages+arr[i];
            }
            else
            {
                pages = arr[i];
                stud ++ ;
            }
        }
        if(k>=stud)
        {
            return true ;
        }
        return false ;
    }
    int splitArray(vector<int>& nums, int k) {
       int n = nums.size();
       if(n<k)
       {
        return -1;
       } 
       int low = *max_element(nums.begin(),nums.end());
       int high = 0;
       for(int i=0;i<n;i++)
       {
        high = high+nums[i];
       }
       int res = -1;
       while(low <= high)
       {
        int mid = (low+high)/2;
        bool a = fun(nums,mid,n,k);
        if(a == true)
        {
            res = mid ;
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
       }
       return res ;
    }
};












