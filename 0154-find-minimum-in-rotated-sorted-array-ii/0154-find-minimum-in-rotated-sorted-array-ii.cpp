class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        stack<int> st;
        st.push(INT_MAX);

        int s = 0, e = n - 1;

        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (st.top() > nums[mid]) {
                st.pop();
                st.push(nums[mid]);
            }

            if (nums[s] == nums[mid] && nums[mid] == nums[e]) {
                s++;
                e--;
            }
            else if (nums[mid] > nums[e]) {
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
        }

        return st.top();
    }
};