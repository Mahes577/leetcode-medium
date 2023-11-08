class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {

        vector<int>ans;
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) {
                sum += nums[j];
                ans.push_back(sum);
            }
        }
        
        sort(ans.begin(), ans.end());
        
        int ans1 = 0;
        int mod = 1000000007;
        for (int i = left-1; i < right; i++)
            ans1 = (ans1 + ans[i])%mod;
        
        return ans1%mod;
    }
};