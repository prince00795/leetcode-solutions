class Solution {
public:
    bool closeStrings(string str1, string str2) {
        if(str1.length()!=str2.length()) return false;
        int n=str1.length();
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;

        for(int i=0;i<n;i++){
            m1[str1[i]]++;
        }
        for(int i=0;i<n;i++){
            m2[str2[i]]++;
        }
        //check the char of both str
        for(auto x:m1){
            if(m2.find(x.first)==m2.end()) return false;
        }
        //putting th freq rep in map
        unordered_map<int,int>f1;
        unordered_map<int,int>f2;

        for(auto x:m1){
            f1[x.second]++;
        }
         for(auto x:m2){
            f2[x.second]++;
        }
        //comparing the feq 
        for(auto x:f1){
            int key=x.first;
           
           if(f2.find(key)==f2.end()) return false;
           if(f2[key]!=f1[key]) return false;

           
        }

        return true;

        
    }
};