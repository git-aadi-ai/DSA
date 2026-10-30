class Solution {
public:
    void fun(vector<int>arr , int n , int idx ,vector<int>&diary , vector<vector<int>>&res , int target , int &sum)
    {
          if(sum == target)
          {
          res.push_back(diary);
          return ;
          }
          if(idx==n || sum > target)
          {
            return ;
          }
        fun(arr , n , idx+1 , diary , res , target , sum);
        if(arr[idx]+sum <= target)
        {
            diary.push_back(arr[idx]);
            sum = sum+arr[idx];
            fun(arr , n , idx , diary , res , target , sum);
            diary.pop_back();
            sum=sum-arr[idx];
        }
        return ;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int idx = 0;
        int sum = 0;
        int n = candidates.size();
        vector<int>diary;
        vector<vector<int>>res;
        fun(candidates , n , idx , diary , res , target , sum);
        return res ;
    }
};