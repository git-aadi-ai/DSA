class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int>arr;
        int low = 0 ;
        int lower = -1;
        int lowans =INT_MAX;
        int high = n-1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(nums[mid]==target)
            {
              lower = mid;
              lowans=min(lower,lowans);
              high=mid-1;
            }
            else if (nums[mid]<target)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        low = 0 ;
        int higher = -1;
        int highans =INT_MIN;
        high = n-1;
         while(low<=high)
        {
            int mid = (low+high)/2;
            if(nums[mid]==target)
            {
              higher = mid;
              highans=max(higher,highans);
              low=mid+1;
            }
            else if (nums[mid]<target)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        if(lowans!=INT_MAX && highans!=INT_MIN)
        {
            arr.push_back(lowans);
            arr.push_back(highans);
        }
        else
        {
            arr.push_back(-1);
            arr.push_back(-1);
        }
        return arr;
    }
};