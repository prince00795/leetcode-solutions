class Solution {
public:
    int numRabbits(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
             m[arr[i]]++;
        }
        int count=0;
         for(auto x:m){
             
            if(  x.first>=x.second) count+=1+x.first;
            else{
                //ceil(a/b)=(a+b-1)/b for int 
                int y= ceil((x.second+x.first) / (x.first+1));
                 count+=y*(1+x.first);
                
            }
         }
         return count;
    }
};