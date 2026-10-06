class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int m = sentence.size();
        int n = searchWord.size();
        int count=1;
        int i=0;
        while(i<m)
        {
            if(sentence[i]==searchWord[0] && (i==0 || sentence[i-1]==' '))
            {
                int j=0;
                int k=i;
                while(j<n && k<m && sentence[k]!=' ' && sentence[k]==searchWord[j])
                {
                    j++;
                    k++;
                }
                if(j==n)
                {
                    return count;
                }
            }
            if(sentence[i]==' ')
            {
                count++;
            }
            i++;
        }
        return -1;
    }
};