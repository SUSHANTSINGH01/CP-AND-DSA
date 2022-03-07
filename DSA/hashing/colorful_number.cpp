int Solution::colorful(int A) 
{
    string str=to_string(A);
    int n=str.size();
    map<long long int, bool> mp;
    
    for(int i=0;i<n;i++)
    {
        long long int temp=1;
        
        for(int j=i;j<n;j++)
        {
            temp*=(long long int)(str[j]-'0');
        
            if(mp.find(temp)!=mp.end())
            return 0;
            
            mp[temp]=1;
        }
    }
    
    return 1;
}
