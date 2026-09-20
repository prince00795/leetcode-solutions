class Solution {
    int helper(char ch){
        int ascii=(int)ch;
        return 123-ascii;
    }
public:
    int reverseDegree(string s) {
        int ans=0;
        for(int i=0;i<s.length();i++){
            int x=helper(s[i]);
            int y=i+1;
            ans+= (y*x);
        }
        return ans;
    }
};