class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=arr.size();
        vector<int> ans;
        int l=0,r=0,x=0;
        for(int i=1;i<arr.size();i++){
            arr[i]^=arr[i-1];
        }
        for(int i=0;i<queries.size();i++){
            l=queries[i][0];
            r=queries[i][1];
            if(l==0) ans.push_back(arr[r]);
            else{
                ans.push_back(arr[l-1]^arr[r]);
            }
        }
        return ans;
    }
};
