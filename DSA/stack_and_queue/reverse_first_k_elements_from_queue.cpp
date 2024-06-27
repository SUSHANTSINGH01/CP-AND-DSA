void rev(queue<int> &q,int i,int n)
{
    if(i==n) 
    return;
    
    int val=q.front();
    q.pop();
    i++;
    rev(q,i,n);
    q.push(val);
}
queue<int> modifyQueue(queue<int> q, int k) 
{
    // add code here.
    rev(q,0,k);
    int n=q.size()-k;
    while(n--)
    {
        int val=q.front();
        q.pop();
        q.push(val);
    }
    return q;  
}
