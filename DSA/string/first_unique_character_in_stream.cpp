string Solution::solve(string A) 
{
    unordered_map<char, int>mp;
    queue<char>q;
    string res;
    for(auto ch:A)
    {
        mp[ch]++;
        q.push(ch);
        while (!q.empty() && mp[q.front()]>1)   
        q.pop();
        
        if(!q.empty())                         
        res.push_back(q.front());
        else                                    
        res.push_back('#');
    }
    return res;
}
