
class Solution {
public:
    int level(TreeNode* root){
        if(root==NULL) return 0;
        return 1+max(level(root->left),level(root->right));
    }
    void nthlevel(TreeNode* root,int currlevel ,int reqlevel,vector<int>&ans){
        if(root==NULL) return;
        if(currlevel==reqlevel){
            ans.push_back(root->val);
        }
        nthlevel(root->left,currlevel+1,reqlevel,ans);
        nthlevel(root->right,currlevel+1,reqlevel,ans);

    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        int n=level(root);
        vector<vector<int>>fians;
        for(int i=1;i<=n;i++){
            vector<int>ans;
            nthlevel(root,1,i,ans);
            fians.push_back(ans);
        }
        return fians;
    }
};