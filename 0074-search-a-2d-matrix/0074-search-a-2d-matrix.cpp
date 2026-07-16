class Solution {
public:
    bool searchInRow(vector<vector<int>>& mat, int target, int row) {
        int n = mat[0].size();
        int st = 0, end = n - 1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (target == mat[row][mid]) {
                return true;
            } else if (target > mat[row][mid]) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        int c = matrix[0].size();

        int st_r = 0;
        int end_r = r - 1;

        while (st_r <= end_r) {
            int mid_r = st_r + (end_r - st_r) / 2;

            if (target >= matrix[mid_r][0] && target <= matrix[mid_r][c - 1]) {
                return searchInRow(matrix, target, mid_r);
            } 
            else if (target > matrix[mid_r][c - 1]) {
                st_r = mid_r + 1;
            } 
            else {
                end_r = mid_r - 1;
            }
        }

        return false;
    }
};