class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
         vector<int>ans;
        for(auto it :mp){
            int ele=it.first;
            int cnt=it.second;
            if(cnt>(n/3)){
               ans.push_back(ele);
            }
        }
        return ans;
    }
};