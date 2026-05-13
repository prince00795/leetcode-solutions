class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>left;
        vector<int>right;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot) left.push_back(nums[i]);
            else if(nums[i]> pivot) right.push_back(nums[i]);
            else if(nums[i]==pivot) count++;
        }
        vector<int>ans;
        for(int i=0;i<left.size();i++){
            ans.push_back(left[i]);
        }
        while(count>0){
            ans.push_back(pivot);
            count--;
        }
        for(int i=0;i<right.size();i++){
            ans.push_back(right[i]);
        }
        return ans;
    }
};