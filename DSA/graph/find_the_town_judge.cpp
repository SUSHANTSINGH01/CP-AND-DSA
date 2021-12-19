class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) 
    {
        if(trust.size()==0 && n==1)
        return 1;
        map<int,int>mp;
        map<int,int>mp1;
        for(int i=0;i<trust.size();i++)
        {
            mp[trust[i][1]]++;
            mp1[trust[i][0]]++;
        }
        int ans=0;
        int ans1=0;
        for(auto it:mp)
        {
           if(it.second>ans1)
           {
               ans1=it.second;
               ans=it.first;
           }
        }
       
        if(ans1==n-1&&mp1[ans]==0)
        return ans;
        return -1;
    }
};
