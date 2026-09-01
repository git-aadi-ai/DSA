class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int largest = 0;
        int largest2= 0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>=largest)
            {
                largest2 = largest;
                largest = nums[i];
            }
            else if(nums[i]>largest2 && nums[i]!=largest)
            {
                largest2 = nums[i];
            }
        }
        int ans = (largest - 1) * (largest2 - 1);
        return ans;
    }
};