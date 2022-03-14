int Solution::solve(string A) 
{
    int c1=0;
    int c2=0;
    int c3=0;
    int c4=0;
    int c5=0;

    for(int i=0;i<A.size();i++)
    if(A[i]>='0' && A[i]<='9')
    c1=1;
    
    for(int i=0;i<A.size();i++)
    if(A[i]>='a' && A[i]<='z')
    c2=1;

    for(int i=0;i<A.size();i++)
    if(A[i]>='A' && A[i]<='Z')
    c3=1;

    for(int i=0;i<A.size();i++)
    if(A[i]=='@' || A[i]=='#' || A[i]=='%' || A[i]=='&' || A[i]=='!' || A[i]=='$' || A[i]=='*')
    c4=1;

    if(A.size()>=8 && A.size()<=15)
    c5=1;

    if(c1==1 && c2==1 && c3==1 && c4==1 && c5==1)
    return 1;
    
    return 0;

}
