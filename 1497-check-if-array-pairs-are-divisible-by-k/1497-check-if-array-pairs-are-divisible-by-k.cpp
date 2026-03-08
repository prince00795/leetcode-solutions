class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int,int>m;
         
        int n=arr.size();
        for(int i=0;i<n;i++){
            int x=((arr[i]%k)+k)%k;
            m[x]++;
        }
        for(auto x:m){
            int val=x.first;
            int freq1=x.second;
            if(val==0 && (freq1%2)==0) continue;
            int target=k-val;
            if(m.find(target)!=m.end()){
                 int freq2=m[target];
                 if(freq1!= freq2) return false;
            }
            else{
                return false;
            }
             
        }
        return true;
    }
};