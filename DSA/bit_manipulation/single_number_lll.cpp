class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) 
    {
        int ans=0;
        int ans1=0;
        
        int n=nums.size();
        int res=nums[0];
        for(int i=1;i<n;i++)
        res=res^nums[i];
        
        int c=0;
        if(res!=INT_MIN)
        c=res & (~(res-1));
        else
        c=res & (~(res));
        
        for(int i=0;i<n;i++)
        {
            if(nums[i] & c)
            ans=ans^nums[i];
            
            else
            ans1=ans1^nums[i];
        }
        
        return {min(ans,ans1),max(ans,ans1)};
        
    }
};
