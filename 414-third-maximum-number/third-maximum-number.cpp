class Solution {
public:
    int thirdMax(vector<int>& nums) {
      map<int,int>mp;
      for(int i=0;i<nums.size();i++)
      {
        mp[nums[i]]++;
      } 
      if(mp.size() < 3)
        {
            auto i = mp.end();
            i--;
            return i->first;
        } 
      auto i=mp.end();
        i--;
        i--;
        i--;
        int a = i->first;
        return a;
    }
};