vector<int> Solution::slidingMaximum(const vector<int> &A, int B) 
{
        priority_queue<pair<int,int>>pq;
        int n=A.size();
        int maxx=INT_MIN;
        vector<int>res;
        
        for(int i=0;i<B;i++)
        {
            pq.push({A[i],i});
            maxx=max(maxx,A[i]);
        }
        
        res.push_back(maxx);
        for(int i=B;i<n;i++)
        {
            
            pq.push({A[i],i});
            
            if(pq.top().second>=i-B+1 && pq.top().second<=i)
            res.push_back(pq.top().first);
                
            else
            {
                
                while(!(pq.top().second>=i-B+1 && pq.top().second<=i))
                pq.pop();
                
                res.push_back(pq.top().first);
           }
        }
        return res;
}
