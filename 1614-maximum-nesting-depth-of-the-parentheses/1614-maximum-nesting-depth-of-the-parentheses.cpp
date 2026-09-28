class Solution {
public:
    int maxDepth(string s) {
        int mx=0;
        int curr=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                curr++;
            }
            if(s[i]==')'){
                mx=max(mx,curr);
                curr--;
                
            }
        }
        return mx;
    }
};