class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int maxi = INT_MIN;
       int n = nums.size();
       for(int i=0;i<n-1;i++)
       {
        for(int j=i+1;j<n;j++)
        {
           int res = (nums[i] - 1) * (nums[j] - 1);
           maxi = max(res,maxi);
        }
       } 
       return maxi ;
    }
};