int Solution::isPalindrome(string A)
{
    int n=A.size();
    vector<char>v;
    for(int i=0;i<n;i++)
    if((A[i]>='A' && A[i]<='Z') || (A[i]>='a' && A[i]<='z') || (A[i]>='0' && A[i]<='9'))
    {
        if(A[i]>='A' && A[i]<='Z')
        A[i]=char(int(A[i])+32);
       v.push_back(A[i]);
    }
    int m=v.size();
    for(int i=0;i<m/2;i++)
    if(v[i]!=v[m-1-i])
    return 0;
    return 1;
}
