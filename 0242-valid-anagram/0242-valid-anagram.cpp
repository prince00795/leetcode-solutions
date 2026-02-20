class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,int>map1;

        for(int i=0;i<s.length();i++){
            map1[s[i]]++;
        }
         
         for(int i=0;i<t.length();i++){
            if(map1.find(t[i])!=map1.end()){
                int freq=map1[t[i]];
                if(freq==1) map1.erase(t[i]);
                else map1[t[i]]--;
            }
            else return false;
         }
        return true;
    }
};