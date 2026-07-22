class Solution {
public:
    void f(int k,int n,vector<int>ans,vector<vector<int>>&fans,int i){
        if(k==0 && n==0){
            fans.push_back(ans);
            return;
        }
        if(n<0 || k==0 || i>9) return;
        
        if(i<=n){
            ans.push_back(i);
            f(k-1,n-i,ans,fans,i+1);
            ans.pop_back();
        }
        f(k,n,ans,fans,i+1);

    }
    vector<vector<int>> combinationSum3(int k, int n) {
       vector<vector<int>>fans;
       vector<int>ans;
       f(k,n,ans,fans,1);
       return fans;

    }
};