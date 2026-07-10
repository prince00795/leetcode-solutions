class Solution {
public:
     
    void f(int n,int N,vector<string>&ans,string temp){
        if(N==(2*n)){
            ans.push_back(temp);
            return;
        }
        f(n,N+1,ans,temp+'(');
        f(n,N+1,ans,temp+')');
        

    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        vector<string>fans;
        string s="";
        int N=0;
        
        f(n,N,ans,s);
          for(int i=0;i<ans.size();i++){
            string s=ans[i];
            int o=0;
            int c=0;
            for(int j=0;j<s.length();j++){
                if(s[j]=='('){
                    o++;
                }
                else if(s[j]==')'){
                    c++;
                }
                if(o-c<0) break;
            }
            
               if(o-c==0) fans.push_back(ans[i]);
                 
            
        }
        return fans;
    }
};