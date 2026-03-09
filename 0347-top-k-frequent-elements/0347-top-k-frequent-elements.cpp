class Solution {
public:
    typedef pair<int,int>pi;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        //map pair is<ele,freq>
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        priority_queue<pi,vector<pi>,greater<pi> >pq;
        //heap pair is<freq,ele>
        for(auto x:m){
            pq.push({x.second,x.first});
            if(pq.size()>k)pq.pop();
        }
        
        vector<int>ans;
        while(pq.size()>0){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};