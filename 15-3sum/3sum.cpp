class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>arg;
        for(int i=0;i<n;i++)
        {   int j=i+1;
            int k=n-1;
            if(i>0 && nums[i]==nums[i-1])
            {
                continue;
            }
            while(j<k)
            {
                int sum = nums[i]+nums[j]+nums[k];
                if(sum<0)
                {
                    j++;
                }
                if(sum>0)
                {
                    k--;
                }
                if(sum==0)
                {
                  vector<int>arr={nums[i],nums[j],nums[k]};
                  arg.push_back(arr);
                  j++;
                  k--;
                    while(j<k && nums[j]==nums[j-1])
                     {
                        j++;
                     }
                     while(j<k && nums[k]==nums[k+1])
                     {
                        k--;
                     }
                }
            }
        }
        return arg;
    }
};