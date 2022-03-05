int Solution::candy(vector<int> &A) 
{
    int n=A.size();
    int sum=0;
   
    vector<int>pre(n, 1);
    vector<int>post(n, 1);
    
    for (int i=1;i<n;i++)
    if(A[i]>A[i-1])
    pre[i]=pre[i-1]+1;
    
    for (int i=n-2;i>=0;i--)
    if(A[i]>A[i+1])
    post[i]=post[i+1]+1;
            
    for (int i=0;i<n;i++)
    sum+=max(pre[i], post[i]);
        
    return sum;
}
