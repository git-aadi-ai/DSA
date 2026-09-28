class Solution {
public:
    struct cmp
    {
        bool operator()(pair<int,char>&a,pair<int,char>&b)
        {
            if(a.first!=b.first)
            {
                return a.first<b.first;
            }
            return a.second<b.second;
        }
    };
    int leastInterval(vector<char>& tasks, int n) {
    priority_queue<pair<int,char>,vector<pair<int,char>>,cmp>pq;
    unordered_map<char,int>mp;
    unordered_map<char,int>free;
    for(int i=0;i<tasks.size();i++)
    {
        mp[tasks[i]]++;
        free[tasks[i]]=1;
    }
    for(auto i:mp)
    {
        int freq = i.second;
        char task = i.first;
        pair<int,char>p1={freq,task};
        pq.push(p1);
    }
    int seat=1;
    while(!pq.empty())
    {
      vector<pair<int,char>>pulled;
      while(!pq.empty())
      {
        pair<int,char>p=pq.top();
        pq.pop();
        int f = p.first;
        int t = p.second;
        if(free[t]<=seat)
        {
            if(f>1)
            {
                pq.push({f-1,t});
            }
            free[t]=seat+n+1;
            break;
        }
        else
        {
            pulled.push_back(p);
        }
      }
      for(int i=0;i<pulled.size();i++)
      {
        pq.push(pulled[i]);
      }
      seat++;
    }
    return seat-1;
    }
};