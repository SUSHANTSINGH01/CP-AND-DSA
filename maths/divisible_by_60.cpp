int Solution::divisibleBy60(vector<int> &A) 
{
    if(A.size()==1) 
    {
        if(A[0]==0)
        return 1;
        return 0;
    }
    
    int res=0;
    bool zero=false;
    
    for(int i=0;i<A.size();i++)
    {
        if(A[i]==0)
        zero=true;
        
        res+=A[i];
    }
    
    if(zero==false)
    return 0;
   
    if(A.size()<=2)
    {
        if(A[0]==6 || A[1]==6)
        return 1;
        return 0;
    }
    
    if(res%3==0 && zero==1)
    return 1;
    
    return 0;
}
