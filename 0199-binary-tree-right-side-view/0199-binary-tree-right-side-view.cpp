class Solution {
public:
    int level(TreeNode* root){
        if (root==NULL) return 0;
        return 1+max(level(root->left),level(root->right));
    }
     void nthlevel(TreeNode* root,int currlevel,int reqlevel,vector<int>&ans){
        if(root==NULL) return;
        if(currlevel==reqlevel){
            ans[currlevel]=root->val;
            return;
        }
        
        nthlevel(root->left,currlevel+1,reqlevel,ans);
        nthlevel(root->right,currlevel+1,reqlevel,ans);

    }
    void levelorder(TreeNode* root,vector<int>&ans){
        int n=level(root);
        for(int i=0;i<n;i++){
            nthlevel(root,0,i,ans);
        }
    }

    vector<int> rightSideView(TreeNode* root) {

        vector<int>ans(level(root),0);
        levelorder(root,ans);
         return ans;
    }
};