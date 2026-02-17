class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            string s="";
            s=(to_string)(nums[i]);
            reverse(s.begin(),s.end());
            nums.push_back(stoi(s));
        }

        unordered_set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        return s.size();
    }
};