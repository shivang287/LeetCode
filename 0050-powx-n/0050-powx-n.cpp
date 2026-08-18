class Solution {
public:
    double myPow(double x, int n) {
        long bf = n;
        double ans = 1;
        if(bf <0){
            x = 1/x;
            bf = -bf;
        }
        while(bf>0){
            if(bf%2==1){
                ans *= x;
            }
            x *= x;
            bf /=2;
        }
        return ans;
    }
};