class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int n=list1.size();
        int m=list2.size();
        unordered_map<string,int>mp;
        vector<string>ans;
        for(int i=0;i<n;i++)
        {
            mp[list1[i]]=i;
        }
        int midx=INT_MAX;
        for(int j=0;j<m;j++)
        {
            if(mp.find(list2[j])!=mp.end())
            {
                int sum=mp[list2[j]]+j;
                if(midx>sum)
                {
                 ans.clear();
                 ans.push_back(list2[j]);
                 midx=sum;
                }
                else if(midx==sum)
                {
                    ans.push_back(list2[j]);
                }
            }
        }
        return ans;
    }
};