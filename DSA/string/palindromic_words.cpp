int Solution::solve(string A) 
{
    int n=A.size();
    string str="";
    vector<string>res;
     for(int i=0;i<n;i++)
    {
        if(int(A[i])==32)
        {
            res.push_back(str);
            str="";
        }
        else
        str+=(A[i]);
    }
    res.push_back(str);
    int c=0;
    for(int i=0;i<res.size();i++)
    {
        int k=res[i].size();
        int f=1;
        for(int j=0;j<k/2;j++)
        if(res[i][j]!=res[i][k-j-1])
        {
            f=0;
            break;
        }
        c+=f;

    }
    return c;
}
