int Solution::solve(int A) 
{
    while(A>9)
    {
        string s=to_string(A);
        int sum=0;
        
        for(int i=0;i<s.size();i++)
        sum+=int(s[i]-'0');
       
       A=sum;

    }
    return A;
}
