int solve1(string B, int a)
{
    int mod=0;

    for (int i=0; i<B.size(); i++)
    mod=(mod*10+B[i]-'0')%a;

    return mod;
}


int Solution::solve(string A, string B) 
{
    int len_a = A.size();
    int len_b = B.size();

    if(len_a==1 && len_b==1 && B[0]=='0' && A[0]=='0')
    return 1;
    if(len_b==1 && B[0]=='0')
    return 1;
    if(len_a==1 && A[0]=='0')
    return 0;

   int mod = solve1(B,4);
   int exponent = (mod == 0) ? 4 : mod;
   int base = A[len_a-1] - '0';
   int result = pow(base, exponent);
   return result % 10;
}
