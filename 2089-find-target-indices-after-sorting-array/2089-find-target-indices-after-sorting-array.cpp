class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        int j=0;
        sort(nums.begin(),nums.end());
        for(int num : nums){
            if(num == target){
                ans.push_back(j);
            }
            j++;
        }
        return ans;
    }
};