class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s = 0;
        int e = arr.size() - 1;
        
        while (s < e) {
            int mid = s + (e - s) / 2;
            
            if (arr[mid] < arr[mid + 1]) {
                // Peak is to the right
                s = mid + 1;
            } else {
                // Peak is at mid or to the left
                e = mid;
            }
        }
        return s; // or return e, both are same here
    }
};
