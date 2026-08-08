 
class Solution {
public:
    void f(TreeNode* root,string &s,int &ans){
        if(root==NULL) return;
        string ch=to_string(root->val);
        s+=ch;
        if(root->left==NULL && root->right==NULL){
            int x = stoi(s);
            ans+=x;
        }
        f(root->left,s,ans);
        f(root->right,s,ans);
        s.pop_back();

    }
    int sumNumbers(TreeNode* root) {
        int ans=0;
        string s="";
        f(root,s,ans);
        return ans;
    }
};