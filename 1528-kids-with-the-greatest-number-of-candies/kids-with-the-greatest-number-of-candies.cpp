class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        int res =-1;
        vector<bool>ans;
        for(int i=0;i<n;i++)
        {
            res = max(res,candies[i]);
        }
        for(int i = 0;i<n;i++)
        {
            int a = extraCandies+candies[i];
            if(a>=res)
            {
                ans.push_back(true);
            }
            else
            {
                ans.push_back(false);
            }
        }
        return ans;
    }
};