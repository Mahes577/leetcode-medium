class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      int n=matrix.size();
      int m=matrix[0].size();
      int i=0,j=n-1;
      while(i<j){
          if(matrix[i][j]>target){
              j--;
          }
          else if(matrix[i][j]<target){
              i++;
          }
          else if(matrix[i][j]==target){
              return true;
          }
      }
      return false;
    }
};