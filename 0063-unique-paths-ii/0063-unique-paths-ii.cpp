class Solution {
public:
     
    int helper(int m,int n,int start, int end,vector<vector<int>>& arr,vector<vector<int>>&dp){
        if(start>=m || end>=n) return 0;
        if(arr[start][end]==1) return 0;
         if(start==m-1 && end==n-1) return 1;
         if(dp[start][end]!=-1) return dp[start][end];
        return dp[start][end]= helper(m,n,start+1,end,arr,dp) +helper(m,n,start,end+1,arr,dp);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& arr) {
        int m=arr.size();
        int n=arr[0].size();
      vector<vector<int>> dp(m, vector<int>(n, -1));
        return helper(m,n,0,0,arr,dp);
    }
};