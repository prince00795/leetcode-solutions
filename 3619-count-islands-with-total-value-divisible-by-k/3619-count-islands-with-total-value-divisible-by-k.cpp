class Solution {
public:
    long long  bfs(vector<vector<int>>& grid,vector<vector<int>>&vis,int i,int j){
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>q;
        q.push({i,j});
        vis[i][j]=1;
        int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};
        long long  sum=0;
        while(!q.empty()){
            auto x=q.front();
            int ro=x.first;
            int cl=x.second;
            sum+=grid[ro][cl];
            q.pop();
            for(int k=0;k<4;k++){
                 int nr=ro+dr[k];
                 int nc=cl+dc[k];
                 if(nr>=0&&nr<n && nc<m &&nc>=0 && grid[nr][nc]>0 && !vis[nr][nc]){
                    vis[nr][nc]=1;
                    q.push({nr,nc});
                 }
            }

        }
        return sum;
    }
    int countIslands(vector<vector<int>>& grid, int k) {
        int n=grid.size();
        int m=grid[0].size();
        int count=0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]>0 && !vis[i][j]){
                    long long  total=bfs(grid,vis,i,j);
                    if(total%k==0) count++;
                }
            }
        }

        return count;
        
    }
};