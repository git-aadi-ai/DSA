class Solution {
public:
    int findLucky(vector<int>& arr) {
        int ans=-1;
        unordered_map<int,int>mp;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        for(auto i:mp)
        {
           int number = i.first;
           int freq = i.second;
           if(number == freq)
           {
            ans=max(ans,number);
           }
        }
        return ans;
    }
};