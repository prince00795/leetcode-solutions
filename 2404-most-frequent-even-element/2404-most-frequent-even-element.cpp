class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int sele=-1;
        int cnt=INT_MIN;
        for(auto it :mp){
            int ele=it.first;
            int count=it.second;
            if(ele%2==0){
                if(count==cnt && ele<sele){
                    sele=ele;
                }
                else if(count>cnt){
                    sele=ele;
                    cnt=count;
                }
            }
        }
        return sele;
    }
};