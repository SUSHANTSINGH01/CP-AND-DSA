class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
     
        int n=nums.size();
        long long int sum=0;
        
        for (int i=0;i<n;i++) 
        {
            int minn=INT_MAX;
            int maxx=INT_MIN;
        
            for (int j=i; j<n; j++) 
            {
                maxx=max(maxx,nums[j]);
                minn=min(minn,nums[j]);
                sum+=(maxx-minn);
			}
		}
		return sum; 
        
    }
};
