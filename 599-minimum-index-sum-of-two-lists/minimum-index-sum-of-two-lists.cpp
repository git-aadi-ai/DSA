class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int midx=INT_MAX;
        vector<string>ans;
        int n=list1.size();
        int m=list2.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(list1[i]==list2[j])
                {
                   if(i+j < midx)
                   {
                    ans.clear();
                    ans.push_back(list1[i]);
                    midx=min(midx,i+j);
                   }
                   else if(i+j == midx)
                   {
                    ans.push_back(list1[i]);
                    midx=min(midx,i+j);
                   }
                }
            }
        }
        return ans;
    }
};