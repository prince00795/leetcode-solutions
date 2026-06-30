class Solution {
public:
    bool f(int dcandy,vector<int>& candy, long long k) {
        int n=candy.size();
        long long tempk=0;
        for(int i=0;i<n;i++){
            tempk+= candy[i]/dcandy;
        }
        if(tempk>=k) return true;
        else return false;

    }
    int maximumCandies(vector<int>& candy, long long k) {
        int n=candy.size();
        int lo=1;
        int hi=1;
        int ans=0;
        for(int i=0;i<n;i++){
            hi=max(hi,candy[i]);
        }
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            bool x=f(mid,candy,k);
            if(x==true){
                ans=mid;
                lo=mid+1;
            }
            else hi=mid-1;
        }
        return ans;
    }
};