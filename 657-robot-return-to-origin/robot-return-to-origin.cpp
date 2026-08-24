class Solution {
public:
    bool judgeCircle(string moves) {
       int up = 0;
       int down = 0;
       int left = 0;
       int right = 0;
       for(int i=0;i<moves.size();i++)
       {
        if(moves[i]=='U')
        {
            up++;
        }
        if(moves[i]=='D')
        {
            down++;
        }
        if(moves[i]=='L')
        {
            left++;
        }
        if(moves[i]=='R')
        {
            right++;
        }
       }
       int res1= up - down;
       int res2=left-right;
       if(res1==0 && res2 == 0)
       {
        return true;
       }
       return false;
    }
};