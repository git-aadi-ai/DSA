class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        nums.push_back(0);
        int n = nums.size();
        int ans = 0 ;
        int count = 0 ;
        for(int i=1;i<n;i++)
        {
            if( nums[i-1]!=0)
            {
                count++;
                ans = max(ans,count);
            }
            else
            {
                count = 0;
            }
        }
        return ans;
    }
};