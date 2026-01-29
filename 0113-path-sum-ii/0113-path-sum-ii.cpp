 
class Solution {
public:
    void sol(TreeNode* root,int targetSum,int currsum,vector<vector<int>>&ans,vector<int>&v){
        
        if(root==NULL) return;
        currsum+=root->val;
        v.push_back(root->val);
        if(root->left==NULL && root->right==NULL ) {
            if(currsum==targetSum){
            ans.push_back(v);
             
        }
        }
        
        sol(root->left,targetSum,currsum,ans,v);
        sol(root->right,targetSum,currsum,ans,v);

        v.pop_back();

        
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>v;
        vector<vector<int>>ans;
        sol(root,targetSum,0,ans,v);
        
        return ans;
        
    }
};