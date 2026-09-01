class Solution {
public:
    string truncateSentence(string s, int k) {
      int count = k ;
      string ans = "";
      int i = 0; 
        while(i<s.size() && count!=0)
        {           
            if(s[i]!=' ')
            {
                ans.push_back(s[i]);
                i++;
            }
            else
            {
                count--;
                if(count == 0) 
                { 
                break; 
                }
                ans.push_back(s[i]);
                i++;
            }
        }
        return ans;
    }
};