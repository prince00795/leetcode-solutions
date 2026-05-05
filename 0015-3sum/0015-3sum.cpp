class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int target= - nums[i];
            int right=i+1;
            int left=nums.size()-1;
            while(right<left){
                 
                if(nums[right]+nums[left]==target){
                    ans.push_back({nums[i],nums[left],nums[right]});
                    left--;
                    right++;
                    while(right < left && nums[right] == nums[right-1]) right++;
                    while(right < left && nums[left] == nums[left+1]) left--;
                }
                else if(nums[right]+nums[left]<target){
                    right++;
                }
                else if(nums[right]+nums[left]>target){
                    left--;
                }


            }
        }
        return ans;
    }
};