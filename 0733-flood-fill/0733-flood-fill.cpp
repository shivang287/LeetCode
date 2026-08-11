class Solution {
public:

    void d(vector<vector<int>>& image, int i, int j, int newcolor, int org){
        if(i<0||j<0||i>=image.size()||j>=image[0].size()||image[i][j]!=org||image[i][j]==newcolor){
            return;
        }
        image[i][j] = newcolor;
        d(image,i+1,j,newcolor,org);
        d(image,i-1,j,newcolor,org);
        d(image,i,j-1,newcolor,org);
        d(image,i,j+1,newcolor,org);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        d(image,sr,sc,color,image[sr][sc]);
        return image;
    }
};