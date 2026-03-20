bool cmp(vector<int>&i1,vector<int>&i2){
    return i1[1]<i2[1];
    // end time of i1 chota hai i2 se i1 return ho jiyega
}
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if(intervals.size()==0) return 0;
        int ans=0;
        sort(intervals.begin(),intervals.end(),cmp);
        int lastendtime=intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<lastendtime) ans++;
            else lastendtime=intervals[i][1];
        }
        return ans;
    }
};