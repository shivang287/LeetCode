class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int s = 0, e = nums.size()-1;
        sort(nums.begin(),nums.end());
        int ans = nums[s+(e-s)/2];
        return ans;
    }
};