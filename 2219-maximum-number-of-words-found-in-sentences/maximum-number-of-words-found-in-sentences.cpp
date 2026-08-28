class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
    int max1=0;
    for(int i=0;i<sentences.size();i++)
    {
        int count=0;
        for(int j=0;j<sentences[i].size();j++)
        {
            if(sentences.size()==1 && sentences[i].size()==1)
            {
                return 1;
            }
            if(sentences[i][j]==' ')
            {
                count=count+1;
                max1=max(count,max1);
            }
        }
    }  
    return max1+1; 
    }
};