string Solution::solve(string A) 
{
    for(int i=0;i<A.size();i++)
    {
        if(A[i]>='A' && A[i]<='Z')
        A[i]=char('a'+ int(A[i]-'A'));

        else
        A[i]=char('A' + int(A[i]-'a'));
    }

    return A;
}
