int Solution::nchoc(int A, vector<int> &B) 
{
    
    priority_queue<long long int> pq;
   
   for(int i=0;i<B.size();i++)
   pq.push(B[i]);

    long long int ans=0;
    while(A>0 && !pq.empty())
    {
        A--;
        if(pq.top()==0)
        break;
       
       ans=(ans%1000000007)+(pq.top()%1000000007);
      
        //ans+=pq.top();
         int top=pq.top();
         pq.pop();
        pq.push(top/2);
       
    }

    return ans%1000000007;
}
