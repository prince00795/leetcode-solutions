class Solution {
public:
     double dp[26][26][105];
    double f(int n, int k, int i, int j){
        if(i<0 or j<0 or i>=n or j>=n) return 0;
        if(k==0) return 1;
        if(dp[i][j][k]>-0.9) return dp[i][j][k];
        
        return dp[i][j][k]= (f(n,k-1,i-2,j-1) +
                f(n,k-1,i-2,j+1) +
                f(n,k-1,i+2,j-1) +
                f(n,k-1,i+2,j+1) +
                f(n,k-1,i-1,j+2) +
                f(n,k-1,i+1,j+2) +
                f(n,k-1,i-1,j-2) +
                f(n,k-1,i+1,j-2)) * (1.0/8);
    }
    double knightProbability(int n, int k, int row, int column) {
        memset(dp,-1,sizeof dp);
        return f(n,k,row,column);
    }
};