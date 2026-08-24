class Solution {
public:
    string toLowerCase(string s) {
      string ans="";
      for(int i=0;i<s.size();i++)
      {
        if(isupper(s[i]))
        {
            ans.push_back(s[i]+32);
        }
        else
        {
            ans.push_back(s[i]);
        }
      }  
      return ans;
    }
};