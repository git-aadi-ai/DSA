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
          else if(matrix[row][col] < target) // agar aapne 2 if lgake rakhe hai the dono if check  honge agar ek if ne row ki value ko -1 kr bhi diya tab bhi same loop me dusri if ki condition check hogi so either use continue or else if 
          {
            col++;
          }
        }
        return false;
    }
};
//Rule: Agar ek hi loop iteration mein multiple if statements hain, toh saare if independently check hote hain.
//Agar pehle if ke andar variable ki value change ho gayi, toh next if changed value ke saath check hoga.

//Isliye agar pehle condition true hone ke baad humein same iteration mein aage ka code nahi chalana, toh .//continue use karo, ya mutually exclusive conditions ke liye else if use karo.