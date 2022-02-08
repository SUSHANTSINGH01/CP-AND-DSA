vector<int> Solution::findOccurences(vector<int> &A) 
{
    map<int,int>mp;
    int n=A.size();

    for(int i=0;i<n;i++)
    mp[A[i]]++;
    

    vector<int>res;

    for(auto it=mp.begin();it!=mp.end();it++)
    res.push_back(it->second);

    return res;

}
