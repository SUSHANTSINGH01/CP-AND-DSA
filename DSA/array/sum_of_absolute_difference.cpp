class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>res;
        int sum=0;
		
		for(auto it:nums)
	    sum+=it;
		
		int lsum=0;
		int rsum=0;
		
        for(int i=0;i<nums.size();i++)
        {
		     lsum+=nums[i];
		     rsum=sum-lsum;
             res.push_back(nums[i]*(i+1)-lsum+rsum-(nums[i]*(n-1-i)));
		}
        
		return res;
    }
};
