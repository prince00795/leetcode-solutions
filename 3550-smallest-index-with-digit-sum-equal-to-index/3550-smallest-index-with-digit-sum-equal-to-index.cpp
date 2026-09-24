class Solution {
public:
    int digitsum(int x){
        int sum=0;
        while(x>0){
            sum+= x%10;
            x=x/10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        int idx=-1;
        for(int i=0;i<nums.size();i++){
            if(digitsum(nums[i])==i){
                idx=i;
                break;
            }
        }
        return idx;
    }
};