class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int res = 0;
        int low = 0;
        int high = n-1;
        while(low<=high)
        {
            int mid =(low+high)/2;
            if(nums[mid]>nums[n-1])
            {
                low=mid+1;
            }
            else
            {
                res = mid;
                high = mid-1;
            }
        }
        int low1= 0;
        int high1=res-1;
        int low2=res;
        int high2=n-1;
        int res1 =-1;
        int res2 =-1;
        while(low1<=high1)
        {
            int mid1= (low1+high1)/2;
            if(nums[mid1]<target)
            {
                low1 = mid1+1;
            }
            else
            {
                res1 = mid1;
                high1=mid1-1;
            }
        }
        while(low2<=high2)
        {
            int mid2= (low2+high2)/2;
            if(nums[mid2]<target)
            {
                low2 = mid2+1;
            }
            else
            {
                res2 = mid2;
                high2=mid2-1;
            }
        }
       if(res1 != -1 && nums[res1] == target)
          return res1;

        if(res2 != -1 && nums[res2] == target)
        return res2;

return -1;
    }
};