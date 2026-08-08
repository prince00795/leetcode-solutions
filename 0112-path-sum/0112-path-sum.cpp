 
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return false;
         targetSum-=root->val;
        if(root->left==NULL && root->right==NULL){
            if(targetSum==0) return true;
        }
       
        bool l=hasPathSum(root->left,targetSum);
        bool r=hasPathSum(root->right,targetSum);
        if(l==false && r==false) return false;
        else return true;

     }
};