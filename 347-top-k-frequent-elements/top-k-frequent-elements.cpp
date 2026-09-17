class Solution {
public:
    struct cmp 
    {
        bool operator()(pair <int,int>&a , pair<int,int>&b)
        {
            if(a.first!=b.first)
            {
                return a.first>b.first;
            }
            return a.second>b.second;
        }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>ans;
        priority_queue<pair<int,int> ,vector<pair<int,int>>,cmp>pq;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        { 
            mp[nums[i]]++;
        }
        for(auto i : mp)
        {
            int element = i.first;
            int freq = i.second;
            pair<int,int>p = {freq,element};
            if(pq.size()< k)
            {
              pq.push(p);
            }
            else
            {
                int t = pq.top().first;
                if(p.first > t)
                {
                    pq.pop();
                    pq.push(p);
                }
                else
                {
                    continue;
                }
            }
        }
        while(!pq.empty())
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};