class Solution {
public:
bool f(int k,vector<int>& piles, int h){
    int n=piles.size();
    long long temphr=0;
    for(int i=0;i<n;i++){
         if(piles[i]<=k){
            temphr++;
         }
         else{
                temphr+=((piles[i]+k-1)/k);
            }
         
    }
        if(temphr<=h) return true;
        else return false;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int lo=1;
        int hi=0;
        int ans=-1;
        for(int i=0;i<n;i++){
            hi=max(hi,piles[i]);
        }
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            bool x=f(mid,piles,h);
            if(x==true){
                ans=mid;
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        return ans;
    }
};