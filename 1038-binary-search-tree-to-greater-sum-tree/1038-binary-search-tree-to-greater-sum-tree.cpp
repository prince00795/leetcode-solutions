class Solution {
public:
void inorder(TreeNode* root,vector<int>&ans){
    if(root==NULL) return;
    inorder(root->left,ans);
    ans.push_back(root->val);
    inorder(root->right,ans);

}
 
 TreeNode* helper(TreeNode* root,vector<int>ans){
     if(root==NULL) return root;
          int sum=0;
          int idx=0;
          for(int i=0;i<ans.size();i++){
            if(root->val==ans[i]) {
                idx=i;
                break;
            }

          }
          for(int i=idx;i<ans.size();i++){
            sum+=ans[i];
          }
          root->val=sum;

         helper(root->left,ans);
         helper(root->right,ans);
         return root;

 }

    TreeNode* bstToGst(TreeNode* root) {
        if(root==NULL) return root;
          vector<int>ans;
          inorder(root,ans);
          
          return helper(root,ans);

    }
};