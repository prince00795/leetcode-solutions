
class Solution {
public:
    void f(TreeNode* root,int level,int &ans){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL ){
            ans=min(ans,level);
        }
        if(root->left!=NULL) f(root->left,level+1,ans);
        if(root->right!=NULL) f(root->right,level+1,ans);

    }
    int minDepth(TreeNode* root) {
        if(root==NULL) return 0;
        int ans=INT_MAX;

        f(root,1,ans);
        return ans;
    }
};