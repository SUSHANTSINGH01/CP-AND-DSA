int Solution::solve(vector<int> &A, int B)
 {
    priority_queue<int>pq;
    int i;
    int c=0;
    for(i=0;i<A.size();i++)
    pq.push(A[i]);
    
    int profit=0;
    while(c<B)
    {
        int x=pq.top();
        pq.pop();
        if(x==0)break;

            profit+=x;
            pq.push(x-1);
            c++;
            
    }
    return profit;
}
