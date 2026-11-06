class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {

        unordered_map<int, int> mp;

        // Step 1: Count frequency of elements in arr1
        for (int x : arr1) {
            mp[x]++;
        }

        vector<int> ans;

        // Step 2: Add elements according to arr2 order
        for (int x : arr2) {
            while (mp[x] > 0) {
                ans.push_back(x);
                mp[x]--;
            }
        }

        // Step 3: Collect remaining elements
        vector<int> remaining;

        for (auto p : mp) {
            while (p.second > 0) {
                remaining.push_back(p.first);
                p.second--;
            }
        }

        // Step 4: Sort remaining elements
        sort(remaining.begin(), remaining.end());

        // Step 5: Append remaining elements
        for (int x : remaining) {
            ans.push_back(x);
        }

        return ans;
    }
};