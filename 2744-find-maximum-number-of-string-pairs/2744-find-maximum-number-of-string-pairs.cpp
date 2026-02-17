class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_set<string>s;
        for(int i=0;i<words.size();i++){
            s.insert(words[i]);
        }
        int count =0;
        
        for(int i=0;i<words.size();i++){
            string target=words[i];
            reverse(target.begin(),target.end());
            s.erase(words[i]);
            if(s.find(target)!=s.end()){
                 count++;
                 
            }
        }
         
        return count;
        
    }
};