/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int level(TreeNode* root){
        if(root==NULL) return 0;
        return 1+max(level(root->left),level(root->right));
    }
    void sol(TreeNode* root,int currlev,int reqlev,vector<int>&ans){
        if(root==NULL) return ;
        if(currlev==reqlev){
            ans.push_back(root->val);
            return;
        }

        sol(root->left,currlev+1,reqlev,ans);
        sol(root->right,currlev+1,reqlev,ans);

    }
     
    vector<vector<int>> levelOrder(TreeNode* root) {
         int n=level(root);
         vector<vector<int>>fans;
        vector<int>ans;
         for(int i=1;i<=n;i++){
            sol(root,1,i,ans);
            fans.push_back(ans);
            ans.clear();
        }

        return fans;
        
    }
};