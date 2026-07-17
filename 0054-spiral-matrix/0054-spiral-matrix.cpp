class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int srow = 0;
        int scol = 0;
        int erow = mat.size() - 1;
        int ecol = mat[0].size() - 1;

        vector<int> ans;

        while (srow <= erow && scol <= ecol) {

            // Top row
            for (int i = scol; i <= ecol; i++)
                ans.push_back(mat[srow][i]);

            // Right column
            for (int i = srow + 1; i <= erow; i++)
                ans.push_back(mat[i][ecol]);

            // Bottom row
            if (srow < erow) {
                for (int i = ecol - 1; i >= scol; i--)
                    ans.push_back(mat[erow][i]);
            }

            // Left column
            if (scol < ecol) {
                for (int i = erow - 1; i > srow; i--)
                    ans.push_back(mat[i][scol]);
            }

            srow++;
            erow--;
            scol++;
            ecol--;
        }

        return ans;
    }
};