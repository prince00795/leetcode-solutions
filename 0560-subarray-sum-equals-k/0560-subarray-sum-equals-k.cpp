class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count =0;
        int n=nums.size();
        //prefix sum array
        vector<int>pre(n,0);
        pre[0]=nums[0];
        for(int i=1;i<n;i++){
            pre[i]=nums[i]+pre[i-1];
        }
        unordered_map<int ,int>m;
        for(int i=0;i<n;i++){
            if(pre[i]==k) {
                count++;
            }
             int target=pre[i]-k;
            if(m.find(target)!=m.end()) count+=m[target];
                m[pre[i]]++;

        }
        return count;

    }
};