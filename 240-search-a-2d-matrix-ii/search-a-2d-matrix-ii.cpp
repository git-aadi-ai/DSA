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
          }
          else if(matrix[row][col] < target)
          {
            col++;
          }
        }
        return false;
    }
};