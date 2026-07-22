class Solution {
public:
    void f(vector<int>& nums,vector<int>ans,vector<vector<int>>&fans,int idx){

         fans.push_back(ans);
        for(int i=idx;i<nums.size();i++){
            if(i>idx && nums[i]==nums[i-1]) continue;
            ans.push_back(nums[i]);
            f(nums,ans,fans,i+1);
            ans.pop_back();
        }
         
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>fans;
        vector<int>ans;
        f(nums,ans,fans,0);
        return fans;
    }
};