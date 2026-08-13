// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long low = 0;
        long high = n;
        long res = 0;
        while(low<=high)
        {
            long mid = (low+high)/2;
            bool a = isBadVersion(mid);
            if(a == false)
            {
                low = mid+1;
            }
            else
            {
                res = mid;
                high = mid-1;
            }
        }
        return res;
    }
};