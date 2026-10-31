class Solution {
public:
   vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
    m = image.size();
    n = image[0].size();
    int orig = image[sr][sc];
    if (orig == color) {
        return image;
    }
    dfs(image, sr, sc, orig, color);
    return image;
   }

private:
    int m;
    int n;
    void dfs(vector<vector<int>>& image, int r, int c, int orig, int color) {
        // base case
        if (r < 0 || c < 0 || r >= m || c >= n || image[r][c] != orig) {
            return;
        }
        image[r][c] = color;
        dfs(image, r-1, c, orig, color);
        dfs(image, r+1, c, orig, color);
        dfs(image, r, c-1, orig, color);
        dfs(image, r, c+1, orig, color);
    }
};

        
                
              

        