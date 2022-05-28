int solve1(vector<int> &A, int B)
{
    int l=0;
    int r=0;
    int res=0;
    unordered_map<int, int>mp;
    int n=A.size();
    while(r<n)
    {
        mp[A[r]]++;
        while(mp.size()>B)
        {
            mp[A[l]]--;
            if(mp[A[l]]==0) 
            mp.erase(A[l]);
            l++;
        }
        res+=r-l+1;
        r++;
    }
    return res;
}

int Solution::solve(vector<int> &A, int B) 
{
    return solve1(A,B)-solve1(A,B-1);
}
