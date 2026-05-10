class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int currmaxproduct=1;
        int currminproduct=1;
        int maxproduct=nums[0];
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0) swap(currmaxproduct,currminproduct);
            currmaxproduct=max(nums[i],nums[i]*currmaxproduct);
            currminproduct=min(nums[i],nums[i]*currminproduct);
             
            maxproduct=max(currmaxproduct,maxproduct);
        }
        return maxproduct;
    }
};