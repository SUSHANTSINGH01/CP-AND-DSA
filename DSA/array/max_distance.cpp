int Solution::maximumGap(const vector<int> &A) 
{
    int n=A.size();
    int res=0;
    vector<pair<int,int>>vec;
    
    for(int i=0;i<n;i++)
    vec.push_back({A[i],i});
    
    sort(vec.begin(),vec.end());
    
    int right_max=vec[n-1].second;
    
    for(int i=n-2;i>=0;i--)
    {
        res=max(res,right_max-vec[i].second);
        right_max=max(right_max,vec[i].second);
    }
    return res;
}
