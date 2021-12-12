class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        unordered_map<int,int>mp;
        mp[0]=1;
        int ans=0;
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            ans+=nums[i];
            int temp=ans-k;
            if(mp[temp])
            c+=mp[temp];
            
            mp[ans]++;
        }
        return c;
    }
};
