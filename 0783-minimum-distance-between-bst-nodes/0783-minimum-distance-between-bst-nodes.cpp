 
class Solution {
public:
    void inorder(TreeNode* root,vector<int>&ans){
        if(root==NULL){
            return;
        }
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
    int minDiffInBST(TreeNode* root) {
        vector<int>ans;
        inorder(root,ans);
        int min=INT_MAX;
        for(int i=0;i<ans.size()-1;i++){
            if(ans[i+1]-ans[i] < min) min=ans[i+1]-ans[i];
        }
        return min;
    }
};