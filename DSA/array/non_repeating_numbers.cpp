class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int ans=0;
        int ans1=0;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        mp[nums[i]]++;
        
        for(auto it:mp)
        {
            if(ans==0 && it.second==1)
            ans=it.first;
            else if(it.second==1)
            ans1=it.first;
        }
        
        return {min(ans,ans1),max(ans,ans1)};
        
    }
};


// optimal solution

