class Solution {
public:
struct cmp
{
    bool operator()(pair<int,int>&a,pair<int,int>&b)
    {
        if(a.first!=b.first)
        {
            return a.first<b.first;
        }
        return a.second<b.second;
    }
};
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
  priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>pq;
  unordered_map<int,int>mp;
  for(int i=0;i<barcodes.size();i++)
{
    mp[barcodes[i]]++;
}  
for(auto i:mp)
{
    int l = i.first;
    int freq = i.second;
    pair<int,int>p={freq,l};
    pq.push(p);
}
vector<int>ans;
int seat = 0;
while(!pq.empty())
{
   pair<int,int>p1=pq.top();
   pq.pop(); 
   if(seat==0 || ans[seat-1]!=p1.second)
   {
    ans.push_back(p1.second);
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
        return ans;
    }
   pair<int,int>p2=pq.top();
   pq.pop(); 
   ans.push_back(p2.second);
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