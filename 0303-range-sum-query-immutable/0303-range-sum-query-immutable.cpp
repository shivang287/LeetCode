class NumArray {
public:
    vector<int> start;
    NumArray(vector<int>& nums) {
        for(int i=1; i<nums.size(); i++){
            nums[i] += nums[i-1];
        }
        start = move(nums);
    }
    
    int sumRange(int left, int right) {
        if(left == 0){
            return start[right];
        }
        return start[right]-start[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */