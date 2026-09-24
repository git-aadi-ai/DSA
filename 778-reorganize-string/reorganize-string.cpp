class Solution {
public:
 struct cmp
        {
            bool operator()(pair<int,char>&a , pair<int,char>&b)
            {
                if(a.first!=b.first)
                {
                    return a.first < b.first ;
                }
                return a.second < b.second ;
            }
        };
    string reorganizeString(string s) {
        int n = s.size();
        unordered_map<char,int>mp;
        priority_queue<pair<int,char>,vector<pair<int,char>>,cmp>pq;
        for(int i=0;i<n;i++)
        {
          mp[s[i]]++;   
        }
        for(auto i:mp)
        {
            int freq = i.second;
            char c = i.first;
            pair<int,char>p={freq,c};
            pq.push(p);
        }
        string ans="";
        string ans2="";
        int seat=0;
        while(!pq.empty())
        {
            char a = pq.top().second;
            int b = pq.top().first;
            pair<int,char>p1={b,a};
            pq.pop();
            if(seat==0 || ans[seat-1]!=a)
            {
                ans.push_back(a);
                seat++;
                p1.first--;
                if(p1.first>0)
                {
                    pq.push(p1);
                }
            }
            else
            {
            if(pq.empty())
            {
                return ans2;
            }
            char aa = pq.top().second;
            int bb = pq.top().first;
            pair<int,char>p2={bb,aa};
            pq.pop();
            ans.push_back(aa);
            seat++;
            p2.first--;
            if(p2.first>0)
            {
                pq.push(p2);
            }
            pq.push(p1);
            }
        }
        return ans;
    }
};