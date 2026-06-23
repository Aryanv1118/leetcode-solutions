class Solution {
public:
    double myPow(double x, int n) {
       long long pow = n;
       if(n<0){
         x = 1/x;
         pow = -pow;
       }       
       double ans = 1;
       while(pow!=0){
           if(pow&1)
             ans *= x;
           x *= x;
           pow = pow>>1;   
        }                  
        return ans;           
    }
};