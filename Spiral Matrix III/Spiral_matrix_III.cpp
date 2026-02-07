class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> result;
        int total = rows * cols;
        
        // Directions: Right, Down, Left, Up
        int dr[4] = {0, 1, 0, -1};
        int dc[4] = {1, 0, -1, 0};
        
        int steps = 1; // steps in current direction
        int r = rStart, c = cStart;
        result.push_back({r, c});
        
        while (result.size() < total) {
            for (int dir = 0; dir < 4; dir++) {
                int moveCount = (dir / 2 == 0) ? steps : steps;  // same for right-down, then increase after 2 turns
                
                for (int i = 0; i < moveCount; i++) {
                    r += dr[dir];
                    c += dc[dir];
                    if (r >= 0 && r < rows && c >= 0 && c < cols) {
                        result.push_back({r, c});
                    }
                }
                
                // After completing left and up, increase step size
                if (dir == 1 || dir == 3) {
                    steps++;
                }
            }
        }
        
        return result;
    }
};