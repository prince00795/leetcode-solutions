bool cmp(vector<int>&p1,vector<int>&p2){
    return p1[1]<p2[1];
}
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& arr) {
         
        int ans=1;
        sort(arr.begin(),arr.end(),cmp);
        int endtime=arr[0][1];
        for(int i=1;i<arr.size();i++){
            if(arr[i][0]>endtime)  {
                endtime=arr[i][1];
                ans++;
            }
            
        }
        return ans;
    }
};