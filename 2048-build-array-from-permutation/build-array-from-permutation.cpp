class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        int i=0;
        while(ans.size()!=n)
        {
            ans.push_back(nums[nums[i]]);
            i++;
        }
        return ans;
    }
};