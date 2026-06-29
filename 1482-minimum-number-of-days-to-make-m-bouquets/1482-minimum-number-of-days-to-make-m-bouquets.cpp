class Solution {
public:
    int f(int day,vector<int>& bloomday, int k){
         int n=bloomday.size();
         int count=0;
         int tempcount=0;
         for(int i=0;i<n;i++){
            if(bloomday[i]<=day){
                tempcount++;
                if(k==tempcount) {
                    count++;
                    tempcount=0;
                }
            }
            else {
                 tempcount=0;
            }
         }
         return count;
    }
    int minDays(vector<int>& bloomday, int m, int k) {
        int n=bloomday.size();
       if((long long)m * k > n) return -1;
        int maxday=-1;
        for(int i=0;i<n;i++){
            maxday=max(maxday,bloomday[i]);
        }
        int lo=1;
        int hi=maxday;
        int ans=-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            int x=f(mid,bloomday,k);
            if(x<m) lo=mid+1;
            else if(x>=m) {
                hi=mid-1;
                ans=mid;
            }
            
        }
        return ans;
    }
};