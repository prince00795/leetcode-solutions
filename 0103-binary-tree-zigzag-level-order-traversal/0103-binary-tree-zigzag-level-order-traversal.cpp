 
class Solution {
public:
int level(TreeNode* root){
        if(root==NULL) return 0;
        return 1+max(level(root->left),level(root->right));
    }

      void sol(TreeNode* root,int currlev,int reqlev,vector<int>&ans){
        if(root==NULL) return ;
        if(currlev==reqlev){
            ans.push_back(root->val);
            return;
        }

       if(reqlev%2==0){
        sol(root->right,currlev+1,reqlev,ans);
         sol(root->left,currlev+1,reqlev,ans);
        
       }
       else{
         sol(root->left,currlev+1,reqlev,ans);
         sol(root->right,currlev+1,reqlev,ans);
       }

    }


    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        int n=level(root);
         vector<vector<int>>fans;
       
         for(int i=1;i<=n;i++){
            vector<int>ans;
            sol(root,1,i,ans);
            fans.push_back(ans);
             
        }

        return fans;
    }
};