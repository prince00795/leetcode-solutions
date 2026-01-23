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
    void helper(TreeNode* root,string s,vector<string>&st){
        if(root==NULL) return;

         s+=to_string(root->val);
        if(root->left==NULL && root->right==NULL) {
            st.push_back(s);
            return;
        }
       
         s += "->";
         helper(root->left,s,st);
         helper(root->right,s,st);


    }
    vector<string> binaryTreePaths(TreeNode* root) {

        string s="";
        vector<string>st;
        helper(root,s,st);
        return st;
        

        
    }
};