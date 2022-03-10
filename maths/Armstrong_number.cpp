int Solution::solve(int A) 
{
    int num=A;
    string s=to_string(A);
    long long int sum=0;
    int k=s.size();
    for(int i=0;i<s.size();i++)
    {
        int n=s[i]-'0';
        sum+=pow(n,k);
    }

    return sum==num;
}
