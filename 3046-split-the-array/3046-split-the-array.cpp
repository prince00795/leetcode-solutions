class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        int n=nums.size();
         sort(nums.begin(),nums.end());
         int count=1;
         for(int i=1;i<n;i++){
           
            if(nums[i]==nums[i-1]) count++;
            else count=1;

             if(count>=3) return false;
         }
            return true;
    }
};