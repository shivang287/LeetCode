class Solution {
public:
    int singleNonDuplicate(vector<int>& a) {
        int n = a.size();
        int s = 0, e = n - 1;

        while (s < e) {
            int mid = s + (e - s) / 2;

            // Make mid even
            if (mid % 2 == 1)
                mid--;

            if (a[mid] == a[mid + 1]) {
                // Single element is on the right
                s = mid + 2;
            } else {
                // Single element is on the left, or is mid
                e = mid;
            }
        }

        return a[s];
    }
};