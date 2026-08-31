class Solution {
public:
     
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        int n=arr1.size();
        int m=arr2.size();
        int ans=0;
        unordered_set<string>st;
        for(int i=0;i<n;i++){
            string s=to_string(arr1[i]);
            string str="";
            for(int j=0;j<s.size();j++){
                str+=s[j];
                st.insert(str);
            }
        }
        for(int i=0;i<m;i++){
             string s=to_string(arr2[i]);
            string str="";
            for(int j=0;j<s.size();j++){
                str+=s[j];
                if(st.find(str)!=st.end()){
                    int l=str.length();
                    ans=max(l,ans);
                }
            }
        }
        return ans;
    }
};