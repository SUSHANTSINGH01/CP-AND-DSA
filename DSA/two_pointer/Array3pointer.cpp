int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    int i=0;
    int j=0;
    int k=0;
    int res=INT_MAX;
    int temp;
    int temp1;
    int temp2;
    int temp3;
    int nA=A.size();
    int nB=B.size();
    int nC=C.size();
    while(i<nA || j<nB || k<nC)
    {
        res = min( res, max (abs(A[i] - B[j]), max ( abs(B[j] - C[k]), abs(C[k] - A[i]) ) ));
        
        if(i+1<nA)
        temp1=max( abs(A[i+1] - B[j]), max ( abs(B[j] - C[k]), abs(C[k] - A[i+1]) ) );
        
        else
        temp1=INT_MAX;
        
        if(j+1<nB)
        temp2=max( abs(A[i] - B[j+1]), max ( abs(B[j+1] - C[k]), abs(C[k] - A[i]) ) );
        
        else
        temp2=INT_MAX;
        
        if(k+1<nC)
        temp3=max( abs(A[i] - B[j]), max ( abs(B[j] - C[k+1]), abs(C[k+1] - A[i]) ) );
        
        else
        temp3=INT_MAX;
        
        temp = min(temp1, min(temp2,temp3));
        
        if(temp==INT_MAX)
        return res;
        
        else if(temp==temp1)
        i++;
        
        else if(temp==temp2)
        j++;
        
        else
        k++;
    }
    return res;

}
