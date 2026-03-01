 
class Solution {
public:
    vector<TreeNode*> preorder(TreeNode* root){
        vector<TreeNode*>ans;
        stack<TreeNode*>st;
       if (root!=NULL) st.push(root);
        while(st.size()>0){
            TreeNode* temp=st.top();
            st.pop();
            ans.push_back(temp);
            if(temp->right!=NULL) st.push(temp->right);
            if(temp->left!=NULL) st.push(temp->left);
        }
        return ans;
    }
    void flatten(TreeNode* root) {
        vector<TreeNode*>ans;
       ans= preorder(root);

       for(int i=0;i<ans.size();i++){
        if(i==ans.size()-1) {
            ans[i]->left=NULL;
            ans[i]->right=NULL;
        }
        else{
            ans[i]->right=ans[i+1];
            ans[i]->left=NULL;
        }
       }
    }
};