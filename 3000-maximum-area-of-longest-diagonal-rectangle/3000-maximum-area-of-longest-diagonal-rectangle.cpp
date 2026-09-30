class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxarea = 0;
        int dio = 0;

        for(int i = 0; i < dimensions.size(); i++) {
            int width = dimensions[i][0];
            int height = dimensions[i][1];

            int curdio = width * width + height * height;
            int currarea = width * height;

            if(curdio > dio) {
                dio = curdio;
                maxarea = currarea;
            }
            else if(curdio == dio) {
                maxarea = max(maxarea, currarea);
            }
        }

        return maxarea;
    }
};