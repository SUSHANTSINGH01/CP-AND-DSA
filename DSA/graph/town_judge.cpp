class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) 
    {
        int n1=trust.size();
        vector<int>vec(n+2,0);
        unordered_map<int,int>mp;
        unordered_map<int,int>mp1;
        for(int i=1;i<=n;i++)
        {
            mp[i]=0;
            mp1[i]=0;
        }
        
        for(int i=0;i<n1;i++)
        {
            mp[trust[i][1]]++;
            mp1[trust[i][0]]++;
        }
            
        
        for(int i=1;i<=n;i++)
        if(mp[i]==n-1 && mp1[i]==0)
        return i;
        
        return -1;
    }
};
