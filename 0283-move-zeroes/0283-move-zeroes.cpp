class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return;
        }
        int j=0,i=0,cnt=0;
        while(i<n){
            if(nums[i]==0){
                i++;
                cnt++;
            }else{
                nums[j]=nums[i];
                i++;
                j++;
            }
        }
        for(int k=j; k<n; k++){
            nums[k]=0;
        }
        }
        
    
};