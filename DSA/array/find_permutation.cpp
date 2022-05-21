vector<int> Solution::findPerm(const string A, int B) 
{
    int maxx=B;
    int minn=1;
    cout<<B<<endl;
    vector<int>res;
    
    for(int i=B-2;i>=0;i--)
    {
        if(A[i]=='I')
        {
            res.push_back(maxx);
            maxx--;
        }
        else
        {
            res.push_back(minn);
            minn++;
        }
    }
    res.push_back(maxx);
    reverse(res.begin(),res.end());
    return res;
}
