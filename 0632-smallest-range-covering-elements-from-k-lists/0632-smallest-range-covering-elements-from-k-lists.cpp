class Solution {
public:
    typedef pair<int,pair<int,int> >pip;
    vector<int> smallestRange(vector<vector<int>>& nums) {
        int mx=INT_MIN;
        priority_queue<pip,vector<pip>,greater<pip>>pq;
        for(int i=0;i<nums.size();i++){
            mx=max(mx,nums[i][0]);
            pq.push({nums[i][0],{i,0}});
        }
        int mn=pq.top().first;
        int start=mn, end=mx;
        while(true){
            int row=pq.top().second.first;
            int col=pq.top().second.second;
            pq.pop();
            if(col==nums[row].size()-1) break;
            pq.push({nums[row][col+1],{row,col+1}});
            mx=max(mx,nums[row][col+1]);
            mn=pq.top().first;
            if(end-start>mx-mn){
                end=mx;
                start=mn;
            }
        }
        return {start,end};
    }
};