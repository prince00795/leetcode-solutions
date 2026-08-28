class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int j=0;
        int ans=0;
        int cl=0;
        unordered_set<char>st;
        while(j<s.length()){
            if(st.find(s[j])==st.end()){
                st.insert(s[j]);
                cl++;
                j++;
                ans=max(ans,cl);
            }
            else{
                st.erase(s[i]);
                i++;
                cl--;
            }

        }
        return ans;
    }
};