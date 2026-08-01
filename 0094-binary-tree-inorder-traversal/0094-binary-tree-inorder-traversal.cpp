 
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        TreeNode* curr=root;
        while(curr!=NULL){
            if(curr->left!=NULL){//find pred
                TreeNode* pred=curr->left;
                while(pred->right!=NULL && pred->right!=curr) pred=pred->right;
                //link
                if(pred->right==NULL){
                    pred->right=curr;
                    curr=curr->left;
                }
                //unlink
                if(pred->right==curr){
                    pred->right=NULL;
                    ans.push_back(curr->val);
                    curr=curr->right;
                }
            }
            else{ //no left so print ans go right
                ans.push_back(curr->val);
                curr=curr->right;
            }
                
        }
        return ans;
    }
};