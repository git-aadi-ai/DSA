class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
       int largest = INT_MIN; 
       int n=arr.size();
       int i=0;
       int j=i+1;
       vector<int>ans;
       while(i<n-1)
       {
        int j=i+1;        
        while(j<n)
        {
         largest=max(largest,arr[j]);
         j++;
        }
        ans.push_back(largest);
        largest=INT_MIN;
        i++;
       } 
       ans.push_back(-1);
       return ans;
    }
};