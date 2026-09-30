class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0;
        int n=nums.size();
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=val)
            {
              swap(nums[i],nums[j]);
              count++;
              j++;
            }
        }
        return count;
    }
};