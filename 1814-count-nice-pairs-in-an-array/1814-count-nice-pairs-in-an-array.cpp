class Solution {
public:
    int reverse(int x) {
        int rev = 0;

        while(x != 0){
            int digit = x % 10;   // last digit
            rev = rev * 10 + digit;
            x = x / 10;          // remove last digit
        }

        return rev;
    }
     
    int countNicePairs(vector<int>& nums) {
        unordered_map<int,int>m;
        int count=0;
        for(int i=0;i<nums.size();i++){
            int x=nums[i]-reverse(nums[i]);
           if(m.find(x)!=m.end()){
            count=count%1000000007;
            count+=m[x];
            m[x]++;
           }
           else m[x]++;
        }

        
        
         return count%1000000007;
    }
};