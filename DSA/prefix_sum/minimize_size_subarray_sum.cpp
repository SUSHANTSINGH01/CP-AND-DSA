class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {
       
       int n=nums.size();
       int ans=INT_MAX;
       int res=0;
       int j=0;

        for(int i=0; i<n; i++)
        {
            res+=nums[i];

            while(res>=target) 
            {
                ans=min(ans,i-j+1);
                res-=nums[j++];           
            }

            if(res>=target)
            ans=min(ans,i-j+1);
        }
    
      return ans == INT_MAX ? 0 : ans;
    }
};
