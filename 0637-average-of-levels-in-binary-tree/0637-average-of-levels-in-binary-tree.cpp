 
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        vector<double>ans;
        while(q.size()>0){
            int s=q.size();
            long long a=0;
            for(int i=0;i<s;i++){
                TreeNode* curr=q.front();
                q.pop();
                a+=curr->val;
               if(curr->left!=NULL) q.push(curr->left);
               if(curr->right!=NULL) q.push(curr->right);

            }
            double value=double(a)/s;
            ans.push_back(value);
        }
        return ans;
    }
};