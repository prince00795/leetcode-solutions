
class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<vector<char>> x(m, vector<char>(n, '#'));

        for(int i=0; i<n; i++){
            x[0][i]='.';
        }

        for(int i=0; i<m; i++){
            x[i][n-1]='.';
        }

        vector<string> ans;

        for(int i=0; i<m; i++){
            string str="";
            for(int j=0; j<n; j++){
                str+=x[i][j];
            }
            ans.push_back(str);
        }

        return ans;
    }
};
