class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int ele=-1;
        for(int i=0;i<n;i++){
            ele=max(ele,nums[i]);
        }
        int ans=ele;
        int hi=ele;
        int lo=1;
        int mid=-1;
        while(lo<=hi){
            mid=lo+(hi-lo)/2;
            int result=0;
            for(int i=0;i<n;i++){
                result+=ceil((double)nums[i]/mid);
            }
            if(result<=threshold){
                hi=mid-1;
                ans=mid;
            }
            else if(result>threshold){
                lo=mid+1;
            }
        }
         return ans;
    }
};