class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        stack<char>st;
        string ans="";
        
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]!=' ')
            {
                st.push(s[i]);
            }
            else
            {
            if(!st.empty())
            {
            while(!st.empty())
            {
                char a=st.top();
                st.pop();
                ans.push_back(a);
            }
            ans.push_back(' ');
            }
        }
        }
        while(!st.empty())
        {
            char a=st.top();
            st.pop();
            ans.push_back(a);
        }
        if(!ans.empty() && ans.back() == ' ')
            {
                ans.pop_back();
            }
        return ans;
    }
};