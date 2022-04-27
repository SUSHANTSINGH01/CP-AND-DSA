int Solution::solve(int A) 
{
    vector<int>res;

    while(A)
    {
        res.push_back(A%2);
        A/=2;
    }

    int result=0;

    for(int i=0;i<res.size();i++)
    {
        if(res[i]==0)
        res[i]=1;
        else
        res[i]=0;

        result+=res[i]*pow(2,i);
    }
    return result;
    
}
