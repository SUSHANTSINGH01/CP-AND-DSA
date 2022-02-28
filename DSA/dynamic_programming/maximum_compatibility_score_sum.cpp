class Solution {
public:
    int maxSumTwoNoOverlap(vector<int>& nums, int firstLen, int secondLen) 
    {
        int l=firstLen;
        int m=secondLen;
        int n=nums.size();
        vector<int>pre(n+1, 0);
        int maxx=0;
	
	
        pre[0] = 0;
        for(int i=1; i<=n; i++) 
        pre[i]=pre[i-1]+nums[i-1];

	
        for(int i=0; i<=n-l; i++) 
        {
            int lsum=pre[i+l]-pre[i];

            for(int j=0; j<=i-m; j++) 
            {
                int msum=pre[j+m]-pre[j];
                maxx=max(maxx,lsum+msum);
            }

            for(int j=i+l; j<=n-m; j++) 
            {
                int msum=pre[j+m]-pre[j];
                maxx=max(maxx,lsum+msum);
            }
        }
	    return maxx;
    }
};
