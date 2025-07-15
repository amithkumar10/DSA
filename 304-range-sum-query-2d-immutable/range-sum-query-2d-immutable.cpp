class NumMatrix {
    vector<vector<int>> prefixSum;

public:
    NumMatrix(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        prefixSum = matrix;  // Copy the original matrix

        // Row-wise prefix sum
        for (int i = 0; i < rows; ++i) {
            for (int j = 1; j < cols; ++j) {
                prefixSum[i][j] += prefixSum[i][j - 1];
            }
        }

        // Column-wise prefix sum
        for (int i = 1; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                prefixSum[i][j] += prefixSum[i - 1][j];
            }
        }
    }

    int sumRegion(int row1, int col1, int row2, int col2) {
        int total = prefixSum[row2][col2];
        int top = (row1 > 0) ? prefixSum[row1 - 1][col2] : 0;
        int left = (col1 > 0) ? prefixSum[row2][col1 - 1] : 0;
        int topLeft = (row1 > 0 && col1 > 0) ? prefixSum[row1 - 1][col1 - 1] : 0;

        return total - top - left + topLeft;
    }
};