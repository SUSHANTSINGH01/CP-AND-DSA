int Solution::solve(vector<int> &A, int B) 
{

    int res = 0;
    int c = 0;
    unordered_map<int, int>mp;
    mp[0] ++;
    for(auto it: A) 
    {
        c+=it%2;
        res += mp[c - B];
        mp[c]++;
    }
    return res;

}
