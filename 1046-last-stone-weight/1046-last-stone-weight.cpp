class Solution {
public:
    int lastStoneWeight(vector<int>& arr) {
        priority_queue<int>pq;
        for(int i=0;i<arr.size();i++){
            pq.push(arr[i]);
        }
        while(pq.size()>1){
            int mx=pq.top();
            pq.pop();
            int secmx=pq.top();
            pq.pop();
            if(mx!=secmx){
                int rem=mx-secmx;
                pq.push(rem);
            }
        }
        if(pq.size()==0) return 0;
        else return pq.top();
    }
};