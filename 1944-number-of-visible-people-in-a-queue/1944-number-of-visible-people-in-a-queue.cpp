class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans(n);
        stack<int>st;
        ans[n-1]=0;
        st.push(arr[n-1]);
        for(int i=n-2;i>=0;i--){
            int count=0;
            while(st.size()>0&&arr[i]>st.top()){
                count++;
                st.pop();
            }
            if(st.size()!=NULL) count++;
            ans[i]=count;
            st.push(arr[i]);
        }

        return ans;

        
    }
};