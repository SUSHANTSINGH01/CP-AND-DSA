int Solution::solve(string A) 
{
    int n=A.size();
    
    int arr[26]={0};
    
    for(int i=0;i<A.size();i++)
    arr[A[i]-'a']++;
    
    int c=0;
    int c1=0;

    for(int i=0;i<26;i++)
    {
        if(arr[i]%2==0)
        c++;
        else 
        c1++;
    }
    if(n%2==0 && c1==0)
    return 1;
    else if(n%2==1 && c1==1)
    return 1;
    else
    return 0;
}
