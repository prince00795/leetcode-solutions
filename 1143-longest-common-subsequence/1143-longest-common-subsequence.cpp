class Solution {
public:
    vector<vector<int>>dp;
    int helper(string &t1, string &t2,int i,int j){
        if(i>=t1.length() || j>=t2.length()) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(t1[i]==t2[j]) return dp[i][j]= 1+helper(t1,t2,i+1,j+1);
        else return dp[i][j]= max(helper(t1,t2,i+1,j),helper(t1,t2,i,j+1));
    }
    int longestCommonSubsequence(string t1, string t2) {
         dp.resize(t1.length(),vector<int>( t2.length(),-1));
        return helper(t1,t2,0,0);
    }
};