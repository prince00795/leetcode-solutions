class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=arr.size();
        vector<int>v(k);
        if(arr[0]>x){
            for(int i=0;i<k;i++){
                v[i]=arr[i];
            }
            return v;
        }
        if(arr[n-1]<x){
            while(k>0){
                v[k-1]=arr[n-1];
                k--;
                n--;
            }
            return v;
        }
        int lo=0;
        int hi=n-1;
        bool flag=false;
        int t=0;
        int mid=-1;
         
        while(lo<=hi){
          mid=lo+(hi-lo)/2;
            if(arr[mid]==x){
                flag=true;
                v[t]=arr[mid];
                t++;
                break;
            }
            else if(arr[mid]>x) hi=mid-1;
             else if(arr[mid]<x) lo=mid+1;
        }
        int lb=hi;
        int ub=lo;
        if(flag==true){
             lb=mid-1;
               ub=mid+1;
        }
        while(t<k && lb>=0 && ub<=n-1){
            int d1=abs(x-arr[lb]);
            int d2=abs(x-arr[ub]);
            if(d1<=d2){
                v[t]=arr[lb];
                t++;
                lb--;
            }
            else{
                v[t]=arr[ub];
                t++;
                ub++;

            }
        }
        if(lb<0){
            while(t<k){
                v[t]=arr[ub];
                t++;
                ub++;
            }
        }
        if(ub>n-1){
            while(t<k){
                v[t]=arr[lb];
                t++;
                lb--; 
            }
        }
        sort(v.begin(),v.end());
        return v;

    }
};