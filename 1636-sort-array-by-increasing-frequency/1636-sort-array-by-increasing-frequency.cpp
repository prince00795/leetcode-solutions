class Solution {
public:
    typedef pair<int,int>pi;
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int ,int>m;
       for(int i=0;i<nums.size();i++){
        m[nums[i]]++;
       } 
        priority_queue<pi,vector<pi>,greater<pi>>pq;
        for(auto x:m){
            //in case for freq same uper wo aata hai jiska vale chota hota hai 
            //hame decreasing me chiye toh ham pahle se -ve kar ke bej rahe 
            pq.push({x.second,-x.first});

        }
        vector<int>ans;
        while(pq.size()>0){
            int freq=pq.top().first;
            while(freq>0){
                //above wala neg  hatane ke liye
                 ans.push_back(-pq.top().second);
                 freq--;
            }
            pq.pop();
           
        }
        return ans;

    }
};