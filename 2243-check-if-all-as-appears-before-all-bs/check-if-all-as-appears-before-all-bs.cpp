class Solution {
public:
    bool checkString(string s) {
     bool a1 = true;
     bool b1 = true;
     for(int i=0;i<s.size();i++)
     {
        if(s[i]=='b')
        {
            b1 = false;
        }
        else if(s[i]=='a' && b1 == false)
        {
            return false;
        }
        else if(s[i]=='a' && b1 == true)
        {
            continue;
        }
     }   
     return true;
    }
};