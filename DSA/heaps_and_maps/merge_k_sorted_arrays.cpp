// naive solution

vector<int> Solution::solve(vector<vector<int> > &A)
{
    vector<int>v;
    int n=A.size();
   

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<A[i].size();j++)
        {
            v.push_back(A[i][j]);
        }
    }

    sort(v.begin(),v.end());

    return v;
}

// optimized solution

vector<int> Solution::solve(vector<vector<int> > &A)
{
    priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
    
    for(int i=0;i<A.size();i++)
    pq.push({A[i][0],{0,i}});
   
    vector<int>v;
    while(!pq.empty())
    {
        v.push_back(pq.top().first);
        int i=pq.top().second.first;
        int j=pq.top().second.second;
        pq.pop();
        if(i<A[j].size()-1)
        {
            i++;
            pq.push({A[j][i],{i,j}});        
        }
    }
    return v;
}
