int Solution::solve(string A) {
    int n=A.size();
    
    int i=0;
    while(i<n && !(A[i]>='a' && A[i]<='z'))
    i++;
    
    if(i==n)
    return 0;
    
    int c=1;
    for(i;i<n;i++)
    {
        if(A[i]==' ')
        {
            while(i<n && A[i]==' ')
            i++;
            
            if(i!=n)
            c++;
           
        }
        
    }
    
    return c;
   
}
