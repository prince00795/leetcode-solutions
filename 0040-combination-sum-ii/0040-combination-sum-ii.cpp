class Solution {
public:
    vector<vector<int>>ans;
    void f(vector<int>& can, int tar,int idx,vector<int>&subset){
        if(tar==0){
            ans.push_back(subset);
            return;
        }
        if(idx==can.size())return;
        if(can[idx]<=tar){
            subset.push_back(can[idx]);
            f(can,tar-can[idx],idx+1,subset);
            subset.pop_back();
        }
        //avoid
        int j=idx+1;
        while(j<can.size() and can[j]==can[j-1])j++;
        f(can,tar,j,subset);

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>subset;
        f(candidates,target,0,subset);
        return ans;
    }
};