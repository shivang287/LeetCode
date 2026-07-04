class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = lastneg(nums)+1;
        int p = nums.size()-firstpos(nums);
        return max(n,p);
    }
       
        int lastneg(vector<int> &nums){
        int st = 0;
        int end = nums.size()-1;
       
        int mid;
        int ans=-1;
        while(st<=end){
            mid = (st+end)/2;
            if(nums[mid]<0){
                ans = mid;
                st = mid+1;
               
            }else{
                
                end = mid-1;
            }
        }
        return ans;
        }

        int firstpos(vector<int> nums){
        int st = 0;
        int end = nums.size()-1;
       
        int mid;
            int ans = nums.size();
            while(st<=end){
                mid = (st+end)/2;
                if(nums[mid] > 0){
                    ans = mid;
                    end = mid-1;
                }else{
                    st = mid+1;
                }
            }
            return ans;
        }
    
};