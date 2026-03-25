class Solution {
public:
    int helper(int n){
        if(n==0) return 1;
        if(n==1) return 1;
        if(n==2) return 2;
        int total=0;
        for(int i=1;i<=n;i++){
            total+=helper(i-1)*helper(n-i);
        }
        return total;
    }
    int numTrees(int n) {
        return helper(n);

    }
};