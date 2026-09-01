class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> mat(n, vector<int>(n, 0));
        int left = 0, right = n - 1, top = 0, bottom = n - 1, val = 1;

        while (left <= right) {
            // Fill every val in top row
            for (int c = left; c <= right; c++) {
                mat[top][c] = val++;
            }
            top++;

            // Fill every val in right col
            for (int r = top; r <= bottom; r++) {
                mat[r][right] = val++;
            }
            right--;

            // Fill every val in bottom row (reverse order)
            for (int c = right; c >= left; c--) {
                mat[bottom][c] = val++;
            }
            bottom--;

            // Fill every val in the left col (reverse order)
            for (int r = bottom; r >= top; r--) {
                mat[r][left] = val++;
            }
            left++;
        }

        return mat;
    }
};