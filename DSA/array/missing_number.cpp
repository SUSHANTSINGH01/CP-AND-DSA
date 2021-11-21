class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        
        long long int ans=0;
        int n=nums.size();
        for(auto it:nums)
        ans+=it;
            
        
        return n*(n+1)/2-ans;

    }
};
