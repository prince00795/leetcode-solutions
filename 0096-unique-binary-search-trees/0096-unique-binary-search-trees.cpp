class Solution {
public:
    vector<int>dp;
    int helper(int n){
        if( dp[n]!=-1) return dp[n];
        if(n==0) return 1;
        if(n==1) return 1;
        if(n==2) return 2;
        int total=0;
        for(int i=1;i<=n;i++){
            total+=helper(i-1)*helper(n-i);
        }
        return dp[n]= total;
    }
    int numTrees(int n) {
        dp.resize(30,-1);
        return helper(n);

    }
};