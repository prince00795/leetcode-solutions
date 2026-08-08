 
class Solution {
public:
    int sum(TreeNode* root){
        if(root==NULL) return 0 ;
        return root->val+ max(0,max(sum(root->left),sum(root->right)));
    }
    void helper(TreeNode* root,int &maxsum){
        if(root==NULL) return;
        int ls=max(0,sum(root->left));
        int rs=max(0,sum(root->right));
        int s=root->val+ls+rs;
        maxsum=max(maxsum,s);
        helper(root->left,maxsum);
        helper(root->right,maxsum);

    }
    int maxPathSum(TreeNode* root) {
        int maxsum=INT_MIN;
        helper(root,maxsum);
        return maxsum;
        
    }
};