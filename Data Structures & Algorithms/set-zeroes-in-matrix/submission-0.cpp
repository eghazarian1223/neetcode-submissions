class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // establish row and col
        int rows = matrix.size();
        int cols = matrix[0].size();
        // create variables to track state having zeros (rows and cols)
        vector<bool> rowZero(rows, false);
        vector<bool> colZero(cols, false);

        // first loop to find where the zero(s) is/are
        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                if (matrix[r][c] == 0) {
                    // originally wrote like rowZero = true;
                    // but rowZero is a vector so need marker 
                    rowZero[r] = true;
                    colZero[c] = true;
                }
            }
        }

        // second loop to update the matrix in place
        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                if (rowZero[r] || colZero[c]) {
                    matrix[r][c] = 0;
                }
            }
        }

    }
};