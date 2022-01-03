vector<int> Solution::dNums(vector<int> &A, int B) 
{
    auto n=A.size();
    vector<int>res;
    
    if(B>n)      
    return res;
    
    unordered_map<int, int>mp;
    for (auto i=0;i<n;i++)
    {
        mp[A[i]]++;
        
        if (i-B+1>=0)
        {
            res.push_back(mp.size());
            mp[A[i-B+1]]--;
            if (mp[A[i-B+1]] == 0)
            mp.erase(A[i-B+1]);
        }
    }
    return res;
}
