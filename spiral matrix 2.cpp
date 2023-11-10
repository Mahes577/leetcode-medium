class Solution{
    public:
    vector<vector<int>> generateMatrix(int n){
     vector<vector<int>>mat(n,vector<int>(n));
    int a=0,m=n-1,t=0,b=n-1;
    
    int p=1;
    while(p<=n*n){
        int i=a;
        while(i<=m){
            mat[t][i]=p;
            p++;i++;
        }
        t++;i=t;
        while(i<=b){
            mat[i][m]=p;
            p++;i++;
        }
        m--;i=m;
        while(i>=a){
            mat[b][i]=p;
            p++;i--;
        }
        b--;i=b;
        while(i>=t){
            mat[i][a]=p;
            p++;i--;
        }
        a++;
    }
    
    return mat;
    }
};