bool is_pal(int n)
{
    int temp=n;
    long long int sum=0;
    while(temp>0)
    {
        sum=sum*10+(temp%10);
        temp/=10;
    }

    if(sum==n)
    return 1;

    return 0;

}
int Solution::solve(int A, int B, int C) 
{
     int c=0;
     vector<int>v;
    int res=1;
    
    for(int i=A;i<=B;i++)
    {
        if(is_pal(i))
        v.push_back(i);
                
    }
    
    if(v.size()==0)
    return 0;
    else if(v.size()==1)
    return 1;
 
    int n1=v.size();
    
    int j=0;
    int i=0;
    for(i=1;i<v.size();i++)
    {
        if(v[i]-v[j]<=C)
        continue;
        else
        {
            res=max(res,i-j);
            j++;
            //cout<<j<<endl;
        }
    }
    res=max(res,i-j);

    
    return res;
}
