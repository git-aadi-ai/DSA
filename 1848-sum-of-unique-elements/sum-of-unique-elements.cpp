class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(auto i:mp)
        {
            int number=i.first;
            int freq =i.second;
            if(freq==1)
            {
                sum=sum+number;
            }
        }
        return sum;
    }
};