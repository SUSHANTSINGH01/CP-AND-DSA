vector<int> Solution::solve(vector<int> &A, int B) {
    
    unordered_map<int,int>mp;
    int n=A.size();
    for(int i=0;i<n;i++)
    mp[A[i]]=i;
    int n1=n;
    for(int i=0;i<n1 && B>0;i++)
    {
        int temp1=mp[A[i]];
        int temp2=mp[n];
        int temp=A[i];
        if(A[i]==n)
        {
            n--;
           continue;
        }
        B--;
        swap(A[mp[n--]],A[mp[A[i]]]);
         mp[n+1]=temp1;
         mp[temp]=temp2;
    }
    return A;
}
