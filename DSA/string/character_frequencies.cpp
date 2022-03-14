vector<int> Solution::solve(string A) 
{
    vector<int>res;
    int arr[26]={0};

    for(int i=0;i<A.size();i++)
    arr[A[i]-'a']++;

    for(int i=0;i<A.size();i++)
    {
        if(arr[A[i]-'a']!=0)
        {
            res.push_back(arr[A[i]-'a']);
            arr[A[i]-'a']=0;
        }
    }
    return res;
}
