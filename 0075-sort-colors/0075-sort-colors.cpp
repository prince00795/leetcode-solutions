class Solution {
public:
    void swap(int &a,int &b){
        int temp=a;
        a=b;
        b=temp;
    }
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int lo=0;
        int hi=n-1;
        int mid=0;
         while(mid<=hi){
            if(nums[mid]==0){
                 swap(nums[lo],nums[mid]);
                    lo++;
                    mid++;
                
            }
            else if(nums[mid]==2){
                  swap(nums[hi],nums[mid]);
                    hi--;
                     
                
            }
            else{
                mid++;
            }
         }
    }
};