class Solution {
public:
    int numRescueBoats(vector<int>& arr, int limit) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int j=n-1;
        int count=0;
        int i=0;
        while(i<=j){
             
            if(arr[i]+arr[j]<=limit){
                count++;
                j--;
                i++;
            }
            else if(arr[i]+arr[j]>limit){
                count++;
                j--;
            }
        }
        return count;
    }
};