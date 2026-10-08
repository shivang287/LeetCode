class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return nums;
        }
        int sum = 0;
        for(int i=0; i<n; i++){
            sum += nums[i];
            nums[i] = sum;
        }
        return nums;
    }
};