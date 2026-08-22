class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        //personally i wouldnt have thought of vector of booleans , other ways?
        vector<bool> rowZeros(rows, false);
        vector<bool> colZeros(cols, false);

        // loop to locate and record row and col of 0 entry
        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                if (matrix[r][c] == 0) {
                    rowZeros[r] = true;
                    colZeros[c] = true;
                }
            }
        }

        // loop to change the matrix (zero out r, c)
        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                if (rowZeros[r] || colZeros[c]) {
                    matrix[r][c] = 0;  
                }
            }
        }

    }

};