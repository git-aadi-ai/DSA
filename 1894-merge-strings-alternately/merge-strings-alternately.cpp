class Solution {
public:
    string mergeAlternately(string word1, string word2) {
     string ans="";
     if(word1.size()==0)
     {
        return word2;
     }   
     if(word2.size()==0)
     {
        return word1;
     }
     int n = word1.size();
     int m = word2.size();
     int i = 0;
     int j = 0;
     int a = 0;
     while(i<n && j<m)
     {
        if(a%2==0)
        {
            ans.push_back(word1[i]);
            a++;
            i++;
        }
        else
        {
            ans.push_back(word2[j]);
            a++;
            j++;
        }
     }
     while(i<n)
     {
        ans.push_back(word1[i]);
        i++;
     }
     while(j<m)
     {
        ans.push_back(word2[j]);
        j++;
     }
    return ans;
    }
};