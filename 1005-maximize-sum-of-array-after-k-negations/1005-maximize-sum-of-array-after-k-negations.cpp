class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int sum=0;
        priority_queue<int ,vector<int>,greater<int> >pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        while(k>0){
            int x=pq.top();
            pq.pop();
            if(x<0) {
                pq.push(-x);
                k--;
            }
           else{
                k=k%2;
                if(k==1) {
                    pq.push(-x);
                    k--;
                }
                else pq.push(x);
            }
        }
        while(pq.size()>0){
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};