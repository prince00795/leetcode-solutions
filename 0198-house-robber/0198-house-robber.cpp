class Solution {
public:
    int helper(vector<int>&arr,int i,int n,vector<int>&dp){
        if(i>=n) return 0;
        if(dp[i]!=-1) return dp[i];
        return dp[i]= max(arr[i]+ helper(arr,i+2,n,dp),helper(arr,i+1,n,dp));
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        return helper(nums,0,n,dp);
    }
};