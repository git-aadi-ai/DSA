class Solution {
public: 
    struct cmp
    {
        bool operator()(pair<int,string>&a , pair<int,string>&b)
        {
            if(a.first!=b.first)
            {
                return a.first>b.first;
            }
            return a.second < b.second;
        }
    };
    vector<string> topKFrequent(vector<string>& words, int k) {
        priority_queue<pair<int,string>,vector<pair<int,string>>,cmp>pq;
        vector<string>ans;
        unordered_map<string,int>mp;
        int n = words.size();
        for(int i=0;i<n;i++)
        {
            mp[words[i]]++;
        }
        for(auto i:mp)
        {
            string word = i.first;
            int freq = i.second;
            pair<int,string>p={freq,word};
            if(pq.size()<k)
            {
                pq.push(p);
            }
            else
            {
                if(freq > pq.top().first || (freq == pq.top().first && word<pq.top().second ))
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
        reverse(ans.begin(),ans.end());
        return ans;
    }
};