class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int>v(n);
        int mid=n/2;
        int right=n-1;
        int left=(n-1)/2;
        for(int i=0;i<nums.size();i++){
            if(i%2!=0){
                v[i]=nums[right];
                 right--;
            }
            else{
                v[i]=nums[left];
                left--;
            }
        }
        for(int i=0;i<n;i++){
            nums[i]=v[i];
        }
    }
};