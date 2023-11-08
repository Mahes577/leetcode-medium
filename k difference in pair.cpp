
class Solution {
public:
int search(vector<int>& nums,int t,int s){
    int e=nums.size()-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(nums[mid]==t)
        return mid;
        else if(t>nums[mid])
        s=mid+1;
        else
        e=mid-1;
    }
    return -1;
}
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        set<pair<int,int>> ans;
        int i=0;
        for(int i=0;i<nums.size();i++)
        {
            if(search(nums,nums[i]+k,i+1)!=-1)
            ans.insert({nums[i],nums[i]+k});
        }
        return ans.size();
    }
};     