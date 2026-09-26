class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        int n=knowledge.size();
        unordered_map<string,string>mp;
        for(int i=0;i<n;i++){
            mp[knowledge[i][0]]=knowledge[i][1];
        }
        int m=s.length();
        string fians="";
        for(int i=0;i<m;i++){
           
            if(s[i]=='('){
                 string str="";
                 i++;

                while(s[i]!=')'){
                    str+=s[i];
                    i++;
                }
                if(mp.find(str)!=mp.end()){
                    fians+=mp[str];
                }
                else fians+='?';
            }
            else fians+=s[i];

        }
        return fians;
    }
};