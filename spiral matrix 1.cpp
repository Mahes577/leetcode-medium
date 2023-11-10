class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
      vector<int>ans;
      int n=matrix.size();
      int m=matrix[0].size();
      int rs=0;
      int re=n-1;
      int cols=0;
      int cole=m-1;
      while(rs<=re&&cols<=cole){
          for(int j=cols;rs<=re&&cols<=cole&&j<=cole;j++){
              ans.push_back(matrix[rs][j]);
          }
          rs++;
          for(int i=rs;rs<=re&&cols<=cole&&i<=re;i++){
              ans.push_back(matrix[i][cole]);
          }
          cole--;
          for(int j=cole;rs<=re&&cols<=cole&&j>=cols;j--){
              ans.push_back(matrix[re][j]);
          }
          re--;
          for(int i=re;rs<=re&&cols<=cole&&i>=rs;i--){
              ans.push_back(matrix[i][cols]);
          }
          cols++;
      }
      return ans;
    }
};
};