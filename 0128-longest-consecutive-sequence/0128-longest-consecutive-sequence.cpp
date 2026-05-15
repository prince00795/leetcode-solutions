class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int size=nums.size();
        if(size==0) return 0;
        if(size==1) return 1;
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        int count=1;
        for(auto n : s){

    if(s.find(n-1) != s.end())
        continue;

    int len = 1;

    while(s.find(n+1) != s.end()){
        len++;
        n++;
    }

    count = max(count, len);
}
        return count;
    }
};