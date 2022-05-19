int Solution::setIntersection(vector<vector<int> > &A)
{
    
    sort(begin(A), end(A), [] (const auto &l, const auto &r) 
    {
        
        if(l[1]!=r[1]) 
        return l[1]<r[1];
        
        else 
        return l[0]>r[0];   
    });
        
        int c=2;
        int head=A[0][1]-1;
        int tail=A[0][1];
        for(auto it:A) 
        {
            if(it[0]<=head) 
            continue;
            else if(it[0]<=tail) 
            {
                head=tail;
                tail=it[1];
                c++;
            } 
            else 
            {
                head=it[1]-1;
                tail=it[1];
                c+=2;
            }
        } 
        return c;
}
