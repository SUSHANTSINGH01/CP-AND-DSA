int Solution::compareVersion(string A, string B) 
{
    int i = 0;
    int j = 0;
    int n = A.size();
    int n1 = B.size();
    while(i<n && j<n)
    {
        string x="";
        string y="";
        
        while(i<n && A[i]=='0')
        i++;
        
            
        while(i<n && A[i]!='.')
        {
            x+=A[i];
            i++;
        }
        
        while(j<n1 && B[j]=='0')
        j++;
        
            
        while(j<n1 && B[j]!='.')
        {
            y+=B[j];
            j++;
        }
        
        if(x!=y)
        {
            if(x.size()==y.size())
            return x.compare(y) > 0 ? 1: -1;
            return x.size()>y.size() ? 1:-1;
        }
        
        i++;
        j++;
    }
    
    while(i<n && A[i]=='0')
    i++;
    
    
    while(j<n1 && B[j]=='0')
    j++;
    
    
    if(i>=n && j>=n1)
    return 0;
    
    else if(i>j)
    return 1;
    else
    return -1;
}
