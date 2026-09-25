class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& intervals) {
         int n=intervals.size();
         vector<int>start;
         vector<int>end;
         for(int i=0;i<n;i++){
            start.push_back(intervals[i][0]);
            end.push_back(intervals[i][1]);
         }
         sort(start.begin(),start.end());
         long long total= 1LL *n*(n-1)/2;
         long long nonintersecting=0;
         for(int i=0;i<n;i++){
            int target=end[i];
            auto it=upper_bound(start.begin(),start.end(),target);
            nonintersecting+= (long long) (start.end()-it);
        }
        return total -nonintersecting;
    }
};