class Solution {
public:
    int lcs(string str1,string str2)
    {
        int n=str1.length();
        int dp[n+1][n+1];
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(i==0 || j==0)
                dp[i][j]=0;
                else if(str1[i-1]==str2[j-1])
                dp[i][j]=1+dp[i-1][j-1];
                else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);              
            }
        }
        return dp[n][n];
    }
    int minInsertions(string s) 
    {
        int n=s.size();
        string str=s;
        reverse(str.begin(),str.end());
        int n1=lcs(s,str);
        int res=n-n1;
        return res;
    }
};
