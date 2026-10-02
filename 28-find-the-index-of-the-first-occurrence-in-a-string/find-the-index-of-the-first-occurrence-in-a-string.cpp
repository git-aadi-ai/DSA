class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0;
        int j=0;
        int m=haystack.size();
        int n=needle.size();
        int count=0;
        int temp;
        while(i<m)
        {
            if(haystack[i]==needle[j])
            {
                count++;
                i++;
                j++;
                if(count==n)
                {
                   return i-n;
                }
            }
            else 
            {
                i=i-j+1;
                j=0;
                count=0;
            }
        }

        return -1;
    }
};