class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int largest = *max_element(nums.begin(),nums.end());
        int idx=-1;
        bool ans=true;
        for(int i=0;i<nums.size();i++)
        {
            int temp=nums[i]*2;
            if(temp<=largest && nums[i]!=largest)
            {
              continue;
            }
            else if(nums[i]==largest)
            {
              idx=i;
              continue;
            }
            else
            {
             ans=false;
            }
        }
        if(ans==false)
        {
            return -1;
        }
        return idx;
    }
};