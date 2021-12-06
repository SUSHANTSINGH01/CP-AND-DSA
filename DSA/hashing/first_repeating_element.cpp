// without hashing

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

// using hashing

int Solution::solve(vector<int> &A) 
{
    
    int n=A.size();
    unordered_map<int,int>mp;
    if(n==1)
    return -1;
    for(int i=0;i<n;i++)
    mp[A[i]]++;
     
    for(int i=0;i<n;i++)  
    if(mp[A[i]]>1)
    return A[i];
    return -1;
}

