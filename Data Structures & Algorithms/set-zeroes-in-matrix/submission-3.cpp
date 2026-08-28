class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // establish row and col variables
        int num_row = matrix.size();
        int num_col = matrix[0].size();
        vector<bool> row_has_zero(num_row, false);
        vector<bool> col_has_zero(num_col, false);        
        for (int r = 0; r < num_row; ++r) {
            for (int c = 0; c < num_col; ++c) {
                if (matrix[r][c] == 0) {
                    row_has_zero[r] = true;
                    col_has_zero[c] = true;

                }
            }
        }

        // loop to zero out rows and cols
        for (int r = 0; r < num_row; ++r) {
            for (int c = 0; c < num_col; ++c) {
                if (row_has_zero[r] || col_has_zero[c]) {
                    matrix[r][c] = 0;
                }
            }
        }

    }

};