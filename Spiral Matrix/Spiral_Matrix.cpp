class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> v;
        // spiral
        int minr = 0, minc = 0;
        int maxr = m - 1, maxc = n - 1;
        while (minr <= maxr && minc <= maxc) {
            // right
            for (int j = minc; j <= maxc; j++) {
                v.push_back(matrix[minr][j]);
            }
            minr++;
            // down
            if (minc > maxc || minr > maxr)
                break;
            for (int i = minr; i <= maxr; i++) {
                v.push_back(matrix[i][maxc]);
            }
            maxc--;
            // left
            if (minc > maxc || minr > maxr)
                break;
            for (int j = maxc; j >= minc; j--) {
                v.push_back(matrix[maxr][j]);
            }
            maxr--;
            // up
            if (minc > maxc || minr > maxr)
                break;
            for (int i = maxr; i >= minr; i--) {
                v.push_back(matrix[i][minc]);
            }
            minc++;
        }
        return v;
    }
};