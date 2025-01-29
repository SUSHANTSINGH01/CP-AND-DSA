class Solution {
    double power(double b, int e) {
        // code here
        
        if(e<0)
        return power(1.0/b,-e);
        
        double res=1.0;
        
        while(e>0){
            if((e&1)==1)
            res*=b;
            
            b*=b;
            e/=2;
          //  System.out.println("e is :: " + e);
        }
        
        return res;
    }
}
