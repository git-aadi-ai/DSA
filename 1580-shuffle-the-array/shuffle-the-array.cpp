class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
      int i = 0;
      int m = nums.size();
      int j = m/2 ;
      vector<int>ans;
      int a = 0;
      while(ans.size()!=2*n)
      {
        if(a%2==0)
        { 
            ans.push_back(nums[i]);
            i++;
            a++;
        }
        else
        {
            ans.push_back(nums[j]);
            j++;
            a++;
        }    
      } 
      return ans;
    }
};