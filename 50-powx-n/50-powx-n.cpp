class Solution {
public:
    double myPow(double x, int n) {
        
        if(n==1)
            return x;
        if(n==-1)
            return 1/x;
        
        if(n==0)
            return 1.0;
        
        if(n%2==0)
        {
            double smalloutput=myPow(x,n/2);
           
            return smalloutput*smalloutput;
        }
        
        else
        {
             double smalloutput=myPow(x,n/2);
            if(n>0)
            return smalloutput*smalloutput*x;
            else
                return smalloutput*smalloutput*1/x;
        }
    }
};