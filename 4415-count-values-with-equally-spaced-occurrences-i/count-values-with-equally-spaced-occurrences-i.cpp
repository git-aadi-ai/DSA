class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        set<int>seen;
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    if((nums[i]==nums[j]) && (nums[j]==nums[k])  && (j-i)==(k-j))
                    {
                        if(mp[nums[i]]==3)
                        {
                        if(seen.find(nums[i])==seen.end())
                        {
                            count++;
                            seen.insert(nums[i]);
                        }
                        }
                    }
                }
            }
        }
        return count;
    }
};