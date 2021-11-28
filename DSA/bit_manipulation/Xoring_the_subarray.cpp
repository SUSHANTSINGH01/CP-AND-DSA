int Solution::solve(vector<int> &A) 
{
    int n=A.size();
    int ans=0;

    for(int i=0;i<n;i++)
    {
        if(i==0 || i==n-1)
        {
            if(n%2)
            ans=ans^A[i];
        }
        else if((i+1)%2 && (n-i)%2)
        ans=ans^A[i];
    }
    return ans;
}


// best solution

int Solution::solve(vector<int> &A) {
    int res=0;
    for(int i=0;i<A.size();i++)
        {
            int cnt = (i+1)*(A.size()-i);// total number of occurences of A[i]'s in all xors
            if(cnt %2!=0)
                res ^=A[i];
        }
    return res;
}

well for even length array its directly 0 and for odd length arr xor even index values.
