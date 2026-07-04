class Solution {
public:
    static bool cmp(string &a, string &b) {
        return a + b > b + a;
    }

    string largestNumber(vector<int>& nums) {
        vector<string> arr;

        // Convert integers to strings
        for (int num : nums) {
            arr.push_back(to_string(num));
        }

        // Sort according to custom comparator
        sort(arr.begin(), arr.end(), cmp);

        // If the largest number is 0, all numbers are 0
        if (arr[0] == "0")
            return "0";

        // Concatenate all strings
        string ans = "";
        for (string &s : arr) {
            ans += s;
        }

        return ans;
    }
};