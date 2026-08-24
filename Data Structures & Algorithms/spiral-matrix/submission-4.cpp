class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        // create vector to return 
        vector<int> spiral_elems;
        // create variables for l, r, t, b
        int left = 0;
        int right = matrix[0].size();
        int top = 0;
        int bottom = matrix.size();

        // travers matrix to collect the entries in right order
        while (left < right && top < bottom) {
            for (int col = left; col < right; ++col) {
                spiral_elems.push_back(matrix[top][col]);
            }
            ++top;
            for (int row = top; row < bottom; ++row) {
                spiral_elems.push_back(matrix[row][right-1]);
            }
            --right;
            if (!(left < right && top < bottom)) {
                break;
            }
            for (int col = right-1; col >= left; --col) {
                spiral_elems.push_back(matrix[bottom-1][col]);
            }
            --bottom;
            for (int row = bottom - 1; row >= top; --row) {
                spiral_elems.push_back(matrix[row][left]);
            }
            ++left;
        }
        // return the vector
        return spiral_elems;

    }
};
