class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int cnt = 0;

        vector<int> e = heights;

        for(int i = 0; i < e.size(); i++) {
            for(int j = 0; j < e.size()-i-1; j++) {
                if(e[j] > e[j+1]) {
                    swap(e[j], e[j+1]);
                }
            }
        }

        for(int i = 0; i < heights.size(); i++) {
            if(heights[i] != e[i]) {
                cnt++;
            }
        }

        return cnt;
    }
};