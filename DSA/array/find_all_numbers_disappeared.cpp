class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>v(n+2);
        for(int i=0;i<=n;i++)
         v[i]=0;
        for(int i=0;i<n;i++)
        v[nums[i]]=1;
        
        vector<int>res;
        for(int i=1;i<=n;i++)
        if(v[i]==0)
        res.push_back(i);
        
        return res;
    }
};
