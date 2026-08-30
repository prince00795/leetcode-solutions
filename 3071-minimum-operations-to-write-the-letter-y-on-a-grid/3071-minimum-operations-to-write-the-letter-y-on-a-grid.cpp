class Solution {
public:
    int minimumOperationsToWriteY(vector<vector<int>>& grid) {
        int n=grid.size();
        int z=0;
        int o=0;
        int t=0;
        int yz=0;
        int yo=0;
        int yt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i<(n/2)){
                    if(i==j || (i+j==n-1)){
                        if(grid[i][j]==0) yz++;
                        else if(grid[i][j]==1) yo++;
                        else if(grid[i][j]==2) yt++;
                    }
                }
                else {
                    if(j==(n/2)){
                        if(grid[i][j]==0) yz++;
                        else if(grid[i][j]==1) yo++;
                        else if(grid[i][j]==2) yt++;
                    }
                }

                if(grid[i][j]==0) z++;
                else if(grid[i][j]==1) o++;
                else if(grid[i][j]==2) t++;

            }
        }

        int ndz=z-yz;
        int ndo=o-yo;
        int ndt=t-yt;
        int ans=INT_MAX;

ans=min(ans,yo+yt+ndz+ndt); // Y=0, Non-Y=1
ans=min(ans,yo+yt+ndz+ndo); // Y=0, Non-Y=2

ans=min(ans,yz+yt+ndo+ndt); // Y=1, Non-Y=0
ans=min(ans,yz+yt+ndo+ndz); // Y=1, Non-Y=2

ans=min(ans,yz+yo+ndo+ndt); // Y=2, Non-Y=0
ans=min(ans,yz+yo+ndz+ndt); // Y=2, Non-Y=1
return ans;

    }
};