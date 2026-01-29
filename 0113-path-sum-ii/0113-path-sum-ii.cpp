 
class Solution {
public:
    void sol(TreeNode* root ,int sum,vector<vector<int>>&ans,vector<int>v){
        
        if(root==NULL) return;
       
        if(root->left==NULL && root->right==NULL ) {
            if(root->val==sum){
            v.push_back(root->val);    
            ans.push_back(v);

        }
            return;
        }

        v.push_back(root->val);
        sol(root->left, sum-(root->val),ans,v);
        sol(root->right, sum-(root->val),ans,v);
 
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>v;
        vector<vector<int>>ans;
        sol(root,targetSum,ans,v);
        
        return ans;
        
    }
};