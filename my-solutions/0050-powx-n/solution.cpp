class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        long Nn = n;
        if(Nn<0) Nn*=-1;
        while(Nn>0){
            if(Nn%2==1){
                ans*=x;
                Nn-=1;
            } 
            x*=x;
            Nn/=2;
        }
        if(n<0) ans = double(1.0)/ans;
        return ans;
    }
};
