class Solution {
public:
    int myAtoi(string s) {
        int n=s.length();
        int idx=0;
        int sign=1;
        for(int i=0;i<n;i++){
            if(s[idx]==' '){
                idx++;
            } 
            else break;
            
        }
        if(s[idx]=='-'){
            sign=-1;
            idx++;
        }
       else  if(s[idx]=='+'){
            sign=1;
            idx++;
        }
        if(idx == n)
        return 0;
        long long ans=0;
        for(int i=idx;i<n;i++){
            char ch=s[i];
            int ascii=int(ch);
            if(ascii<48 ||ascii>57) break;
            else{
                int digit=ch-'0';
                 if (ans > INT_MAX / 10 ||
                    (ans == INT_MAX / 10 &&
                    ((sign == 1 && digit > 7) ||
                    (sign == -1 && digit > 8))))
                                                {
                                     return (sign == 1) ? INT_MAX : INT_MIN;
                                    }

                ans=ans*10 +digit;
            }
        }
        if(sign==1) return ans;
        else return -ans;
    }
};