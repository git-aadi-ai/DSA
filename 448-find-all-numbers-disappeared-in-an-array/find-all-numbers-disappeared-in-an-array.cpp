class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
     vector<int>ans;
     unordered_map<int,int>mp;
     for(int i = 1;i<=nums.size();i++)
     {
        mp[i]=0;
     }   
     for(int i=0;i<nums.size();i++)
     {
        mp[nums[i]]++;
     }
     for(auto i : mp )
     {
        int a = i.first;
        int b = i.second;
        if(b == 0)
        {
            ans.push_back(a);
        }
     }
     return ans;
    }
};