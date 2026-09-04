class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int count = 1 ;
        int zero = 0 ;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                zero++;
            }
            else
            {
            count = count * nums[i];
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(zero>1)
            {
                ans.push_back(0);
            }
            else if (zero==1)
            {
                if(nums[i]==0)
                {
                    ans.push_back(count);
                }
                else
                {
                    ans.push_back(0);
                }
            }
            else
            {
            int element = count/nums[i];
            ans.push_back(element);
            }
        }
        return ans;
    }
};