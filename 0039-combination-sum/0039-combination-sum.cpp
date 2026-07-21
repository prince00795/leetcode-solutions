class Solution {
public:
    void f(vector<int>&candidates,int target,vector<int>ans, vector<vector<int>>&fians,int idx){
        if(target==0){
            fians.push_back(ans);
            return;
        }
        if(target<0 || idx>candidates.size()-1) return ;

       if(candidates[idx]<=target){
        ans.push_back(candidates[idx]);
         f(candidates,target-candidates[idx],ans,fians,idx);
         ans.pop_back();
       }

        f(candidates,target,ans,fians,idx+1);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>fians;
        vector<int>ans;
        f(candidates,target,ans,fians,0);
        return fians;
    }
};