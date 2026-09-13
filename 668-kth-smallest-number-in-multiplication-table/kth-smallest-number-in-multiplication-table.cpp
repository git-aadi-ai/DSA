class Solution {
public:
    int fun(int m , int n , int mid)
    {
        int count=0;
        int row = m ;
        int col = 1 ;
        while(row > 0 && col <= n)
        {
            if(row*col <= mid )
            {
                count = count + row ;
                col ++;
            }
            else
            {
                row -- ;
            }
        }
      return count;
    }
    int findKthNumber(int m, int n, int k) {
        int low = 1 ;
        int high = n*m ;
        int res = 0;
        while(low<=high)
        {
            int mid = (low + high)/2;
            int count = fun(m , n , mid);
            if(count < k)
            {
                low = mid+1;
            }
            else
            {
              res = mid ;
              high = mid-1;
            }
        }
        return res;
    }
};