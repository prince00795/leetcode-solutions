class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
            vector<int>prefixs;
            int sum=0;
            for(int i=0;i<nums.size();i++){
                 sum+=nums[i];
                 prefixs.push_back(sum);
            }
            int count=0;
            unordered_map<int,int>mp;
            mp[0] = 1;
            for(int i=0;i<prefixs.size();i++){
                int target=prefixs[i]-k;
                if(mp.find(target)!=mp.end()){
                    count+=mp[target];
                }
                mp[prefixs[i]]++;
            }
            return count;
    }
};