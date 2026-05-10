class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        int maxsum=nums[0];
        for(int i=0;i<nums.size();i++){
            maxsum=max(maxsum,nums[i]);
        }
        int currsum=0;
        for(int i=0;i<nums.size();i++){
            currsum+=nums[i];
            if(currsum<0) currsum=0;
           else  maxsum=max(maxsum,currsum);
           
        }
        return maxsum;
    }
};