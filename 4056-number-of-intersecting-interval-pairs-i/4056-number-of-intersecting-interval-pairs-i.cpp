class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<int>start;
        vector<int>end;
        for(int i=0;i<n;i++){
                start.push_back(intervals[i][0]);
                end.push_back(intervals[i][1]);
        }
        int total=(n*(n-1))/2;
        int count=0;
       sort(start.begin(),start.end());
       for(int i=0;i<n;i++){
        int target=end[i];
        auto it=upper_bound(start.begin(),start.end(),target);
         count +=(start.end()-it);

       }

        return total-count ;

        
    }
};