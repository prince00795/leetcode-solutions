class Solution {
public:
    int dp[100005][3][2];
    int helper(int k, vector<int>& arr,int i,bool canbuy){
        if(i == arr.size()) return 0;
        if(k==0) return 0;
        if(dp[i][k][canbuy]!=-1) return dp[i][k][canbuy];
        int profit=0;
        if(canbuy==true) profit= max(-arr[i]+helper(k,arr,i+1,false),helper(k,arr,i+1,true));
        if(canbuy==false) profit= max(arr[i]+helper(k-1,arr,i+1,true),helper(k,arr,i+1,false));

        return  dp[i][k][canbuy]=profit;
    }
    int maxProfit(vector<int>& arr) {
          memset(dp,-1,sizeof dp);
        return helper(2,arr,0,true);
    }
};