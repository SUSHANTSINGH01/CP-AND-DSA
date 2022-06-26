class Solution {
public:
    int maximumXOR(vector<int>& nums) {
        vector<int>vec(32,0);
        
        // if(nums.size()==1)
        // return nums[0];
        
        for(int i=0;i<31;i++)
        vec[i]=pow(2,i);

        vector<int>dp(32,0);

        for(int i=0;i<31;i++)
        {
            for(int j=0;j<nums.size();j++)
            if(nums[j]&vec[i])
            dp[i]=1;
        }

        long long int res=0;
        
        for(int i=0;i<31;i++)
        res+=(dp[i]*pow(2,i));


        return res;
    }
};
