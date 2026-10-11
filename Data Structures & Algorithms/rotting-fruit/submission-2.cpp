class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int, int>> rotted_oranges;
        int fresh = 0;
        int minutes = 0;

        for (int r = 0; r < grid.size(); ++r) {
            for (int c = 0; c < grid[0].size(); ++c) {
                if (grid[r][c] == 1) {
                    ++fresh;
                }
                if (grid[r][c] == 2) {
                    rotted_oranges.push({r, c});
                }
            }
        }
        
        vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        while (fresh > 0 && !rotted_oranges.empty()) {
            int length = rotted_oranges.size();
            for (int i = 0; i < length; i++) {
                auto curr = rotted_oranges.front();
                rotted_oranges.pop();
                int r = curr.first;
                int c = curr.second;

                for (const auto& dir : directions) {
                    int row = r + dir.first;
                    int col = c + dir.second;
                    if (row >= 0 && row < grid.size() &&
                        col >= 0 && col < grid[0].size() &&
                        grid[row][col] == 1) {
                        grid[row][col] = 2;
                        rotted_oranges.push({row, col});
                        --fresh;
                    }
                }
            }
            ++minutes;
        }
        if (fresh == 0) {
            return minutes;
        } 
        else {
            return -1;
        }
    }
};