class Solution {
public:
    int maxSum(vector<int>& nums) {

        vector<int> largest(10, -1);
        int ans = -1;

        for (int num : nums) {
            int x = num;
            int mx = 0;

            // Find largest digit
            while (x > 0) {
                mx = max(mx, x % 10);
                x /= 10;
            }

            // If we already have a number with the same largest digit
            if (largest[mx] != -1) {
                ans = max(ans, largest[mx] + num);
            }

            // Store the largest number for this digit
            largest[mx] = max(largest[mx], num);
        }

        return ans;
    }
};