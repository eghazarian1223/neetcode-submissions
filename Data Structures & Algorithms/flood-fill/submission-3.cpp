class Solution {
public:
   vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int orig = image[sr][sc];
        if (orig == color) {
            return image;
        }
        ROWS = image.size();
        COLS = image[0].size();
        dfs(image, sr, sc, color, orig);
        return image;
   }

private:
    int ROWS;
    int COLS;

    void dfs(vector<vector<int>> & image, int r, int c, int color, int orig) {
        if (r < 0 || c < 0 || r >= ROWS || c >= COLS || image[r][c] != orig) {
            return;
        }
        image[r][c] = color;
        dfs(image, r, c+1, color, orig);
        dfs(image, r, c-1, color, orig);
        dfs(image, r+1, c, color, orig);
        dfs(image, r-1, c, color, orig);
    }
};

        
                
              

        