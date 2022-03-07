int Solution::solve(vector<int> &A) 
{
    int n=A.size();
    unordered_map<int, int> mp;
    int sum=0;
    int length=0;
 
    for (int i=0;i<n;i++) 
    {
        if(A[i]==0)
        sum+=-1;
        else
        sum+=1;
 
        if(sum==1)
        length=i+1;
 
        else if(mp.find(sum)==mp.end())
        mp[sum]=i;
 
        
        if (mp.find(sum-1)!= mp.end()) 
        {
            if(length<(i-mp[sum-1]))
            length=i-mp[sum - 1];
        }
    }
    return length;   
}
