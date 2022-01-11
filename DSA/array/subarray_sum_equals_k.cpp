class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        int n=nums.size();
        vector<int>v(n+1,0);
        v[0]=0;
        for(int i=1;i<=n;i++)
        v[i]=v[i-1]+nums[i-1];
        
        int res=0;
        unordered_map<int, int>mp;
        for(int i=0; i<=n; i++)
        {
            if(mp.find(v[i]-k)!=mp.end())
            res+=mp[v[i]-k];

            mp[v[i]]++;
        }
        return res;
    }
};
