class Solution {
public:
    int arrangeCoins(int n) {
        long long s = 1, e = n;
        int ans = 0;

        while (s <= e) {
            long long mid = s + (e - s) / 2;
            long long coins = mid * (mid + 1) / 2;

            if (coins <= n) {
                ans = mid;
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }

        return ans;
    }
};