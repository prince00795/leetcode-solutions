 //MORRIS TRAVERSAL
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        TreeNode* curr=root;
        while(curr!=NULL){
            if(curr->left!=NULL){//find pred

            TreeNode* pred=curr->left;
            while(pred->right!=NULL && pred->right!=curr){
                pred=pred->right;
            }

            if(pred->right==NULL){//link
                pred->right=curr;
                curr=curr->left;
            }
            if(pred->right==curr){//unlink and visit
                pred->right=NULL;
                ans.push_back(curr->val);
                 curr=curr->right;
            }

            }
            else{ //curr->left==NULL
                ans.push_back(curr->val);
                curr=curr->right;
            }
        }
        return ans ;
        
    }
};