class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<vector<int>>ans;
        vector<int>start;
        vector<int>end;
        for(int i=0;i<intervals.size();i++){
            start.push_back(intervals[i][0]);
            end.push_back(intervals[i][1]);
        }
        sort(start.begin(),start.end());
        sort(end.begin(),end.end());

        int i=0;
        for(int j=0;j<n;j++){
            if(j==n-1||start[j+1]>end[j]){
                ans.push_back({start[i],end[j]});
                i=j+1;
            }
        }
        return ans;
    }
};