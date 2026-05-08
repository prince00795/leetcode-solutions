class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
         
        for(auto it :mp){
            int ele=it.first;
            int cnt=it.second;
            if(cnt>(n/2)){
                return ele;
            }
        }
        return 0;
    }
};