class Solution {
public:
    bool force(vector<int>arr , int mid , int k)
    {
        int cow = 1 ;
        int prevpos = arr[0];
        for(int i=0;i<arr.size();i++)
        {
            int dist = arr[i]-prevpos;
            if(dist < mid )
            {
                continue ;
            }
            else
            {
                cow ++ ;
                prevpos = arr[i];
            }
        }
        if( cow >= k)
        {
            return true;
        }
        return false ;
    }
    int maxDistance(vector<int>& position, int m) {
        int n = position.size();
        int res = 0;
        sort(position.begin(),position.end());
        int low = 1;
        int high = position[n-1] - position[0];
        while(low<=high)
        {
            int mid = (low+high)/2;
            bool a = force(position , mid , m);
            if ( a == true)
            {
              res = mid ;
              low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
        return res ;
    }
};