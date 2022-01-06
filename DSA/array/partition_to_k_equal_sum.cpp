class Solution {
public:
    bool solve(int i,int csum,int sum,int sum_p_set,vector<int>& nums,int k,vector<bool>&v)
    {
        if(k==1)
        return 1;
        if(csum==sum_p_set)
        return solve(0,0,sum,sum_p_set,nums,k-1,v);
        
        for(int j=i;j<nums.size();j++)
        {
            if(!v[j])
            {
                v[j]=1;
                if(solve(j+1,csum+nums[j],sum,sum_p_set,nums,k,v))
                return 1;
                v[j]=0;
            }
        }
        return 0;
    }
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        
        int sum=0;
        int n=nums.size();
        vector<bool>v(n,false);
        for(int i=0;i<n;i++)
        sum+=nums[i];
        
        if(k==0||sum%k!=0)
        return false;
        
        return solve(0,0,sum,sum/k,nums,k,v);
    }
};
