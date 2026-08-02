/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int lev(TreeNode* root){
    if(root==NULL) return 0;
    return 1+max(lev(root->left),lev(root->right));
}
    long long kthLargestLevelSum(TreeNode* root, int k) {
        int n=lev(root);
        if(k>n) return -1;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        vector<long long> ans(n, 0);
        while(q.size()>0){
            TreeNode* curr=q.front().first;
            int level=q.front().second;
            q.pop();
            ans[level]+=curr->val;
            if(curr->left!=NULL) q.push({curr->left,level+1});
            if(curr->right!=NULL)q.push({curr->right,level+1});

        }
        sort(ans.begin(),ans.end());
        reverse(ans.begin(),ans.end());
        return ans[k-1]; 
    }
};