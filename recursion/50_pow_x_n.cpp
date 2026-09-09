class Solution {
public:
    double myPow(double x, int n) {
        long long N=n;
        if(N<0){
            x=1/x;
            N=-N;
        }
        double ans=1;
   while(N>0){  // jab tak N 0 nahi hota
   if(N%2==1){  // N odd hai ya nahi
    ans=ans*x;
   }
    x=x*x;
    N=N/2;
   }
   return ans;
    }
};
