class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
    int n=matrix.size();
    int m =matrix[0].size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            swap(matrix[j][i],matrix[i][j]);
        }
    }
    for(int i=0;i<n;i++){
    reverse(matrix[i].begin(),matrix[i].end());
    }
    }
};