class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;

        // Insert all elements into the set
        for (int num : nums) {
            st.insert(num);
        }

        int longest = 0;

        // Check each number
        for (int num : st) {

            // If there is no previous number, this is the start of a sequence
            if (st.find(num - 1) == st.end()) {

                int current = num;
                int length = 1;

                while (st.find(current + 1) != st.end()) {
                    current++;
                    length++;
                }

                longest = max(longest, length);
            }
        }

        return longest;
    }
};