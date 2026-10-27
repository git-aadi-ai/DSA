class Solution {
public:
    void fun(string &digits , int n , int idx , string&diary , vector<string>&ans , unordered_map<char,string>&mp)
    {
        if(idx==n)
        {
            ans.push_back(diary);
            return ;
        }
        string choice = mp[digits[idx]];
        for(int i=0;i<choice.size();i++)
        {
            diary.push_back(choice[i]);
            fun(digits , n , idx+1 , diary , ans ,mp);
            diary.pop_back();
        }
        return ;
    }
    vector<string> letterCombinations(string digits) {
        if(digits.empty())
        {
            return {};
        }
         int n = digits.size();
         int idx = 0;
         string diary="";
         vector<string>ans;
         unordered_map<char,string>mp;
         mp['2']="abc";
         mp['3']="def";
         mp['4']="ghi";
         mp['5']="jkl";
         mp['6']="mno";
         mp['7']="pqrs";
         mp['8']="tuv";
         mp['9']="wxyz";
        fun(digits , n , idx , diary , ans , mp);
        return ans;
    }
};