int Solution::solve(vector<int> &A) 
{
    vector<pair<int,int>>vp;
    int i=1;
    for(auto it:A)
    {
        vp.push_back({it,i});
        i++;
    }

    sort(vp.begin(),vp.end());
    int pos=INT_MAX;
    int val=-1;

    for(int i=0;i<vp.size()-1;i++)
    {
       int a=vp[i].first;
       int b=vp[i].second;

       if(a==vp[i+1].first)
       {
           
           if(b<pos)
           {
              pos=b;
              val=a;
           }
       }
    }
    return val;
}
