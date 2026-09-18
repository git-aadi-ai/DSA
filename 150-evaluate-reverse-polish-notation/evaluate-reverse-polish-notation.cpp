class Solution {
public:
int evalRPN(vector<string>& tokens) {
int n = tokens.size();
stack<string>st;
for(int i=0;i<n;i++)
{
  if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/" )
   {
     st.push(tokens[i]);
   }
  if( tokens[i] == "+")
   {
    string one = st.top();
    int a = stoi(one);
    st.pop();
    string two = st.top();
    int b = stoi(two);
    st.pop();
    int ans = a+b;
    st.push(to_string(ans));    
   }
  if( tokens[i] == "-")
   {
    string one = st.top();
    int a = stoi(one);
    st.pop();
    string two = st.top();
    int b = stoi(two);
    st.pop();
    int ans = b-a;
    st.push(to_string(ans));  
   }
if( tokens[i] == "*")
   {
    string one = st.top();
    int a = stoi(one);
    st.pop();
    string two = st.top();
    int b = stoi(two);
    st.pop();
    int ans = a*b;
    st.push(to_string(ans));  
   }
if( tokens[i] == "/")
   {
    string one = st.top();
    int a = stoi(one);
    st.pop();
    string two = st.top();
    int b = stoi(two);
    st.pop();
    int ans = b/a;
    st.push(to_string(ans));  
   }  
}
int finalanswer = stoi(st.top());
return finalanswer; 
    }
};