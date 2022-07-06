int Solution::seats(string A) {
    vector<int>arr;
    for(int i=0;i<A.size();i++)
    {
         if(A[i]=='x')
         arr.push_back(i);
    }
    int n=arr.size();
    long long int res=0;
    int mid=n/2;
    int k=1;
    for(int i=mid-1;i>=0;i--)
    {
        res=(res+arr[mid]-k-arr[i]);
        res%=10000003;
        k++;
    }
    k=1;
    for(int i=mid+1;i<n;i++)
    {
        res=(res+arr[i]-(arr[mid]+k));
        res%=10000003;
        k++;
    }
    return res%10000003;
}
