class Solution {
public:
    string reverseWords(string s) {
     string ans="";
     stack<char>st;
     for(int i=0;i<s.size();i++)
     {
        if(s[i]!=' ')
        {
            st.push(s[i]);
        }
        else
        {
        while(!st.empty())
        {
            char a = st.top();
            st.pop();
            ans.push_back(a);
        }
        ans.push_back(' ');
        }
     }
     while(!st.empty())
     {
        ans.push_back(st.top());
        st.pop();
     }
     return ans;   
    }
};