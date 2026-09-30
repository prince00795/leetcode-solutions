class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int>ans(seq.length());
        int depth=0;
        for(int i=0;i<seq.length();i++){
            if(seq[i]=='('){
                depth++;
                if(depth%2!=0) ans[i]=0;
                else  ans[i]=1;
            }
            else if(seq[i]==')'){
                if(depth%2!=0) ans[i]=0;
                else  ans[i]=1;
                depth--;
            }
        }
        return ans;
    }
};