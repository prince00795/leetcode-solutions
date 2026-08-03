
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>fians;
        if(root==NULL) return fians;
        queue<TreeNode*>q;
        q.push(root);
        while(q.size()>0){
            vector<int>ans;
            int s=q.size();
            for(int i=0;i<s;i++){
                TreeNode* temp=q.front();
                q.pop();
                ans.push_back(temp->val);
               if(temp->left!=NULL) q.push(temp->left);
                if(temp->right!=NULL) q.push(temp->right);
            }
             
                fians.push_back(ans);
  
        }
        reverse(fians.begin(),fians.end());
        return fians;
    }
};