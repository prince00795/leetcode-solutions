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
                
            int groupSize = x.first + 1;
            int freq = x.second;
            //ceil(a/b)=(a+b-1)/b for int 
            int groups = (freq + groupSize - 1) / groupSize;

            count += groups * groupSize;
                
            }
         }
         return count;
    }
};