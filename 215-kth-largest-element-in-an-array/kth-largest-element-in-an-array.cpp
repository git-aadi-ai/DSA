class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       int n = nums.size();
       priority_queue<int , vector<int> , greater<int>>pq;
       if(k>n)
       {
        return -1;
       }
       for(int i=0;i<k;i++)
       {
        pq.push(nums[i]);
       }
       if(k==n)
       {
          return pq.top();
       }
       for(int i=k;i<n;i++)
       {
         if(pq.top()<nums[i])
         {
            pq.pop();
            pq.push(nums[i]);
         }
       }
       return (pq.top());
    }
};