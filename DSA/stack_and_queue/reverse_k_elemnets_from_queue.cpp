void solve(queue<int> &q,int i,int n)
{
    if(i==n) 
    return;
    
    int val=q.front();
    q.pop();
    i++;
    solve(q,i,n);
    q.push(val);
}
queue<int> modifyQueue(queue<int> q, int k) 
{
    solve(q,0,k);
    int n=q.size()-k;
    while(n--)
    {
        int val=q.front();
        q.pop();
        q.push(val);
    }
    return q;
    // add code here.
}
