class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> hm;
        for(int num : nums){
            hm[num] = hm[num]+1;
            if(hm[num] > 1){
                return num;
            }
        }
        return -1;
    }
};