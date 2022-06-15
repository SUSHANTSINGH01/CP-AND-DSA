int Solution::isMatch(const string A, const string B) {
        int n=A.size();
        int m=B.size();
        
        
        if(m==0)
        return n==0;
        
        if(m>1 && B[1]=='*')
        {
           
            if(isMatch(A,B.substr(2)))
            return 1;
            
            if(n>0 && (A[0]==B[0] || B[0]=='.'))
            return isMatch(A.substr(1),B);
            
            return 0;
        }
        else
        {
            if(n>0 &&  (A[0]==B[0] || B[0]=='.'))
            return isMatch(A.substr(1), B.substr(1));
            
            return 0;
        }
}
