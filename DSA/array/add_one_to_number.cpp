vector<int> Solution::plusOne(vector<int> &A) 
{
    reverse(A.begin(),A.end());
    int rem=0;
    int n=A.size();
    vector<int>res;
    vector<int>res1;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        rem++;
      res.push_back((A[i]+rem)%10);
      rem=(A[i]+rem)/10;
    }
    if(rem==1)
    res.push_back(rem);
    reverse(res.begin(),res.end());
    int i=0;
    while(res[i]==0)
    {
        i++;
    }
    for(;i<res.size();i++)
    res1.push_back(res[i]);
    return res1;
}
