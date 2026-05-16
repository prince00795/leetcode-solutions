class Solution {
public:
    int longestContinuousSubstring(string s) {
        int i=0;
        int j=1;
        int count=1;
        int tempcount=1;
        int n=s.length();
        while(j<n){
            int ascii1=int(s[i]);
            int ascii2=int(s[j]);
            if(ascii2==ascii1+1){
                tempcount++;
                i++;
                j++;
            }
            else{
                i++;
                j++;
                tempcount=1;
            }
            count=max(count,tempcount);
        }
        return count;
    }
};