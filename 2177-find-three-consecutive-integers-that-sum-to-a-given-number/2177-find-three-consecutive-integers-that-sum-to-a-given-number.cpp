class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        //3(n+1)
        if(num%3!=0) return {};
        long long x=(num/3)-1;
         return {x,x+1,x+2};
    }
};