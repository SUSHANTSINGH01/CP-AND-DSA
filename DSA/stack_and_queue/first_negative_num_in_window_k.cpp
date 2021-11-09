vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
        
        
        
       deque<int>dq;
       vector<long long>ans;
        
       for(int i=0;i<K;i++)
       if(A[i]<0)
       dq.push_back(i);
       for(int j=K;j<N;j++)
       {
           if(dq.empty())
           ans.push_back(0);
           else
           ans.push_back(A[dq.front()]);
           
           while(!dq.empty() && dq.front()<=j-K)
           dq.pop_front();
           
           
           if(A[j]<0)
           dq.push_back(j);
       }
       
       if(dq.empty())
       ans.push_back(0);
       else
       ans.push_back(A[dq.front()]);
       
       return ans;
}
