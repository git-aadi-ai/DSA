class Solution {
public:
    string makeGood(string s) {
        stack<int>st;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
               if(!st.empty() )
                {
                    char a =st.top();
                    if(tolower(a)==tolower(s[i])  && a!=s[i])
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push(s[i]);
                    }
                }
                else
                {
                    st.push(s[i]);
                }
        }
        string ans="";
        while(!st.empty())
        {
            char a=st.top();
            st.pop();
            ans.push_back(a);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};