/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {

    if(root == NULL)
        return {};
        queue<Node*>q;
        q.push(root);
        vector<vector<int>>fians;
        while(q.size()>0){
            int s=q.size();
            vector<int>ans;
            for(int i=0;i<s;i++){
                Node* curr=q.front();
                q.pop();
                ans.push_back(curr->val);
                for(auto child : curr->children){
                    q.push(child);
                }
            }
            fians.push_back(ans);
        }
        return fians;
    }
};