class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
      priority_queue<int>pq;
      int ans = 0 ;
      int n=piles.size();
      for(int i=0;i<n;i++)
      {
        pq.push(piles[i]);
      } 
      while(!pq.empty())
      {
         int a = pq.top();
         pq.pop();
         int b = a-floor(a/2);
         pq.push(b);
         k--;
         if(k==0)
         {
            break;
         }
      }
      while(!pq.empty())
      {
        int aa = pq.top();
        pq.pop();
        ans=ans+aa;
      }
      return ans;
    }
};