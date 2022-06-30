int Solution::solve(vector<int> &A, int B) {
    int n=A.size();
    int curr=0;
    int count=0;
    while(curr<n)
    {
        int next=curr+B-1;
        int prev=curr-B+1;
        int pos=next;
        
        cout<<next<<" "<<prev<<endl;
        if(prev<0)
        prev=0;
        
        while(pos>=prev)
        {
            if(A[pos])
            break;
            
            pos--;
        }
        if(pos>=prev)
        {
            count++;
            curr=pos+B;
        }
        else
        return -1;
    }
    return count;
}
