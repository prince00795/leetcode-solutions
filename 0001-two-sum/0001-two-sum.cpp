class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int>map;
        for(int i=0;i<nums.size();i++){
             map[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            int newtarget=target-nums[i];
            if(map.find(newtarget)!=map.end() && map[newtarget] != i){
                return {i,map[newtarget]};
            }
        }
        return {};
        
    }
};