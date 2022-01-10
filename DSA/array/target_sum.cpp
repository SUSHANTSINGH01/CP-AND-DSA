class Solution {
public:
    int res = 0;
    int sum = 0;
    int arr[21]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    void solve(vector<int>& nums, int pos,int target) 
    {
        if(pos==nums.size()) 
        {
            if(sum==target) 
            res++;
            return;
        }
        
        if(abs(target-sum)>arr[pos]) 
        return;
        
        sum-=nums[pos];
        solve(nums, pos+1, target);
      
        sum+=nums[pos]*2;
        solve(nums, pos+1,target);
        
        sum-=nums[pos];
    }
    int findTargetSumWays(vector<int>& nums, int target) 
    {
        for(int i=nums.size()-1;i>=0;i--) 
        arr[i]=arr[i+1]+nums[i];
        solve(nums,0,target);
        return res;
    }
};
