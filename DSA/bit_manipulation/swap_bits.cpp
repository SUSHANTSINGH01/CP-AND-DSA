int Solution::solve(int A, int B, int C) 
{
    vector<int>vec(32,0);
    for(int i=0;i<32;i++)
    vec[i]=0;
    int c=31;
    int d=0;
    while(A>0)
    {
        vec[c--]=(A%2);
        A/=2;
        d++;
    }

    swap(vec[32-B],vec[32-C]);
    long long int sum=0;
    for(int i=31;i>=0;i--)
    sum=sum+(pow(2,31-i)*vec[i]);
    

    return sum;

}
