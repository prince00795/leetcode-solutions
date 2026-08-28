class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int r=boxGrid.size();
        int c=boxGrid[0].size();
         vector<vector<char>>ans(c,vector<char>(r,'.'));
        for(int i=r-1;i>=0;i--){
            for(int j=c-1;j>=0;j--){
                if(boxGrid[i][j]=='*'){
                    ans[j][r-1-i]='*';
                    continue;
                }
                if(boxGrid[i][j]=='.'){
                    for(int k=j;k>=0;k--){
                        if(boxGrid[i][k]=='#'){
                            ans[j][r-1-i]='#';
                            boxGrid[i][k]='.';
                            break;
                        }
                        if(boxGrid[i][k]=='*') break;
                    }
                }
                if(boxGrid[i][j]=='#'){
                    if(j==c-1 || boxGrid[i][j+1]=='*' ||
                       boxGrid[i][j+1]=='#'){ // correction

                        ans[j][r-1-i]='#'; // correction
                    }
                }
            }
        }
        return ans;
    }
};