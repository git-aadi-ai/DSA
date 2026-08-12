class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n =  nums.size();
        int res=INT_MAX;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    if(nums[i]<nums[j] && nums[k]<nums[j])
                    {
                       int sum = nums[i]+nums[j]+nums[k];
                       res=min(res,sum);
                    }
                }
            }
        }
        if(res == INT_MAX)
        {
            return -1;
        }
        return res;
    }
};