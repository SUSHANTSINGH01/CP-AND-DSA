vector<int> Solution::solve(string A) 
{
    int arr[26]={0};
    //int res[26]={0};
    vector<int>res(26);
    for(int i=0;i<26;i++)
    arr[i]=0;
    
    int n=A.size();
    for(int i=0;i<n;i++)
    {
        //cout<<int(A[i])-97<<endl;
        arr[int(A[i])-97]++;
    }

    for(int i=0;i<26;i++)
    res[i]=(arr[i]);

    return res;
}
