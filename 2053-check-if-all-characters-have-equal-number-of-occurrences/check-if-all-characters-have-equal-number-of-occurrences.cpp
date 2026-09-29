class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int n=s.size();
        int temp=0;
        int mx=0;
        unordered_map<char,int>mp;
        bool ans = true;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        for(auto i:mp)
        {
            char a=i.first;
            int b=i.second;
            temp=b;
        }
         for(auto i:mp)
        {
            char a=i.first;
            int b=i.second;
            mx=b;
            if(mx!=temp)
            {
               ans=false;
            }
        }
        return ans;
    }
};