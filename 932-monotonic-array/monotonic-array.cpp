class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
     int n = nums.size();
     bool ans = true;
     for(int i = 0 ;i<n-1;i++)
     {
       if(nums[i]<=nums[i+1])
       {
        continue;
       }
       else
       {
        ans=false;
       }
     }
     bool ans1=true;
     for(int i = 0 ;i<n-1;i++)
     {
       if(nums[i]>=nums[i+1])
       {
        continue;
       }
       else
       {
        ans1=false;
       }  
     }  
       if(ans1 == false && ans == false)
       {
        return false;
       }
       return true;
    }
};