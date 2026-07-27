class Solution {
public:
    double power(double x,long long n){
        if(n==0) {
            return 1 ;
        }
        
        if(n%2==0) return power(x*x,n/2);
        else  return x * power(x*x,n/2);

    }
    double myPow(double x, int n) {
         long long pwr=n;
         if(pwr<0) pwr= - pwr;
        double fians=power(x,pwr);
        if(n<0) return (1.0/fians);
        else return fians;
        
    }
};