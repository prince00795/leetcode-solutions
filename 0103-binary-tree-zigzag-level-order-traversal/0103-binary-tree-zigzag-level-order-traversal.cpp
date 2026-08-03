 
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
 
        vector<vector<int>>fians;
        if(root==NULL) return fians;
        queue<TreeNode*>q;
        q.push(root);
        bool revers = false;
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
            if(revers==true){
                reverse(ans.begin(),ans.end());
                revers=false;
                fians.push_back(ans);
            }
            else {
                fians.push_back(ans);
                revers=true;
            }

             
        }
        return fians;
    }
};