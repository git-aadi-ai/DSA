class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
     int n=nums.size();
     unordered_map<int,int>mp;
     for(int i=0;i<n;i++)
     {
        mp[nums[i]]++;
     }   
     vector<int>ans;
     for(auto i:mp)
     {
        int value = i.first;
        int freq = i.second;
        if(freq==1)
        {
            ans.push_back(value);
        }
     }
     return ans;
    }
};