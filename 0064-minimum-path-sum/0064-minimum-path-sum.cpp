class Solution {
public:
       int dp[205][205];
    int helper(vector<vector<int>>&arr,int n,int m,int i,int j){
         if(i==n-1 && j==m-1) return arr[i][j];
         if(dp[i][j]!=-1) return dp[i][j];
         if(i>=n || j>=m) return INT_MAX;
         return dp[i][j]= arr[i][j]+ min(helper(arr,n,m,i+1,j),helper(arr,n,m,i,j+1));
    }
    int minPathSum(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        memset(dp,-1,sizeof dp);
        return helper(arr,n,m,0,0);
    }
};