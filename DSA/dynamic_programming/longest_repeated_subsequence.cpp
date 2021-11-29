class Solution {
	public:
		int LongestRepeatingSubsequence(string str)
		{
		    // Code here
		    string str1=str;
            int x=str.size();
            int y=x;
            vector<vector<int>>dp(x+1,vector<int>(y+1));
            for(int i=1;i<=x;i++)
            for(int j=1;j<=y;j++)
            dp[i][j]=(str1[i-1]==str[j-1] && i!=j)?dp[i-1][j-1]+1:max(dp[i-1][j],dp[i][j-1]);
            
            return dp[x][y];
        
           }

};
