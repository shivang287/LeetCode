class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0;
        int maxcnt = 0;
        for(int num : nums){
            if(num == 1){
                cnt++;
                if(cnt > maxcnt){
                    maxcnt = cnt;
                }
            }else{
                cnt  = 0;
            }
        }
        return maxcnt;
    }
};