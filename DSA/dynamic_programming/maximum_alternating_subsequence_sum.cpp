class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        
        long long int sum=0;
        
        long long int lst=0;
        int c=0;
        int n=nums.size();
        if(n==1)
        return nums[0];
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]-nums[i+1]>0)
            {
                sum+=nums[i]-nums[i+1];
                lst=nums[i+1];
            }  
        }
        if(nums[n-1]>=nums[n-2])
        return sum+nums[n-1];
        else
        return sum+lst;
    }
};
