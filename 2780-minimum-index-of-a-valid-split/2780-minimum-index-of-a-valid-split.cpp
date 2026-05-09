class Solution {
public:
    
    void dominant(vector<int>v,int &element,int &cnt){
        unordered_map<int,int>mp;
        int n=v.size();
        for(int i=0;i<v.size();i++){
            mp[v[i]]++;
        }
        for(auto it :mp){
            int ele=it.first;
            int count=it.second;
            if(count>(n/2)) {
                element=ele;
                cnt=count;
            }
        }
        
    }
    int minimumIndex(vector<int>& nums) {
        int n=nums.size();
        int element=0;
        int count=0;
        dominant(nums,element,count);
        int tempcount=0;
        for(int i=0;i<n;i++){
            if(nums[i]==element){
                tempcount++;
                //size of that array =i+1 and other n-i-1 
                if(tempcount>(i+1)/2 && (count-tempcount)>(n-i-1)/2) return i;
            }
        }
        return -1;
    }
};