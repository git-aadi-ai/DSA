class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int row = matrix.size()-1;
        int col = 0;
        while(row>-1 && col<m)
        {
          if(matrix[row][col] == target)
          {
            return true;
          }
          if(matrix[row][col] > target)
          {
            row--;
            continue;
          }
          else if(matrix[row][col] < target) // agar aapne 2 if lgake rakhe hai the dono if check check honge agar ek if ne row ki value ko -1 kr bhi diya tab bhi same loop me dusri if ki condition check hogi so else either use continue or else if 
          {
            col++;
          }
        }
        return false;
    }
};