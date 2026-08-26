class Solution {
public:

void subset(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& all){
        if(i==nums.size()){
            all.push_back({ans});
            return;
        }
        ans.push_back(nums[i]);
        subset(nums,ans,i+1,all);
        ans.pop_back();
        int idx = i+1;
        while(idx<nums.size() && nums[idx]==nums[idx-1]){
            idx++;
        }
        subset(nums,ans,idx,all);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> all;
        vector<int> ans;
        subset(nums,ans,0,all);

        return all;
    }
};