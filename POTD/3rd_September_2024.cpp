class Solution{
	public:
	int minOperations(string str1, string str2) 
	{ 
	    // Your code goes here
	    
	    int n=str1.size();
	    int m=str2.size();
	    
	    int res=0;
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
      
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(str1[i-1]==str2[j-1]){
                  dp[i][j]=dp[i-1][j-1]+1;
                }
                else{
                  dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
                }
            }
        }
        
        return n+m-(dp[n][m]*2);
	} 
};
