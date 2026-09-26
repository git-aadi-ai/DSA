class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        vector<pair<int,int>>arr;
        int n = capital.size();
        priority_queue<int>pq;
        for(int i=0;i<profits.size();i++)
        {
            arr.push_back({capital[i],profits[i]});
        }
        sort(arr.begin(),arr.end());
        int idx=0;
        while(k--)
        {
            while(idx<n)
            {
                if(arr[idx].first>w)
                {
                    break;
                }
                pq.push(arr[idx].second);
                idx++;
            }
            if(pq.empty())
            {
                return w;
            }
            w=w+pq.top();
            pq.pop();
        }
        return w;
    }
};