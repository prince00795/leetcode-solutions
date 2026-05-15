class Solution {
public:
    void f(vector<int>&v,int nums){
        while(nums>0){
            int ud=nums%10;
            v.push_back(ud);
            nums=(nums-ud)/10;
        }
        reverse(v.begin(), v.end());
    }
    int largestInteger(int nums) {
        vector<int>v;
        f(v,nums);
        vector<int>ed;
        vector<int>od;
        for(int i=0;i<v.size();i++){
            if(v[i]%2==0) ed.push_back(v[i]);
            else od.push_back(v[i]);
        }
        sort(ed.rbegin(),ed.rend());
        sort(od.rbegin(),od.rend());
        string ans="";
        int j=0;
        int k=0;
        for(int i=0;i<v.size();i++){
            if(v[i]%2==0){
                ans+= to_string(ed[j]);
                j++;
            }
            else{
                 ans+= to_string(od[k]);
                k++;
            }

        }
        return stoi(ans);
    }
};