class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        priority_queue<pair<int ,int > >pq;
        int sum=0;
         for(auto v :boxTypes){
             int noOfUnits=v[1];
             int noOfBox=v[0];
             pq.push({noOfUnits,noOfBox});
         }
         while(truckSize>0&& pq.size()>0){
              int noOfUnit=pq.top().first;
              int noOfBox=pq.top().second;
              pq.pop();
              if(noOfBox<=truckSize){
                sum+= noOfUnit*noOfBox;
                truckSize-=noOfBox;
              }
              else{
                sum+=noOfUnit*truckSize;
                break;
              }
         }
         return sum;
    }
};