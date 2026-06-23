class Solution {
public:
    double myPow(double x, int n) {
        if(n<0)
            x = 1/x;
        double ans = x;
        int times = n;
        if(times>0){
        while(times!=0){
            x *= x;
            times = times/2;
        }}
        else{
            while(times!=0){
                ans *=ans;
                times = times/2;
            }
        }
        return ans;
    }
};