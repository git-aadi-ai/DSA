class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        stack<int>st1;
        stack<int>st2;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                st1.push(nums[i]);
            }
            else
            {
               st2.push(nums[i]);
            }
        }
        int i=0;
        while(!st1.empty() || !st2.empty())
        {
          if(i%2==0)
          {
            int temp=st1.top();
            ans.push_back(temp);
            st1.pop();
            i++;
          }
          else
          {
            int temp=st2.top();
            ans.push_back(temp);
            st2.pop();
            i++;
          }
        }
        return ans;
    }
};