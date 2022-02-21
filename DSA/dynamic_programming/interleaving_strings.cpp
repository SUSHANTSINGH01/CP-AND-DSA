class Solution {
public:
    int dp[101][101];
    bool solve(string s1,string s2,string s3,int i,int j,int n)
    {
        if(i>=0 && j>=0 && dp[i][j]!=-1)
        return dp[i][j];
        
        if(i<0 && j<0 && n<0)
        return true;
        
        
        if(i>=0 && n>=0 && s1[i]==s3[n] && j>=0 && s2[j]==s3[n])
        return dp[i][j]=(solve(s1,s2,s3,i-1,j,n-1) || solve(s1,s2,s3,i,j-1,n-1));
        
        else if(i>=0 && n>=0 && s1[i]==s3[n])
        return solve(s1,s2,s3,i-1,j,n-1);
        
        else if(j>=0 && n>=0 && s2[j]==s3[n])
        return solve(s1,s2,s3,i,j-1,n-1);
        
        return false;
    }
    
    bool isInterleave(string s1, string s2, string s3) 
    {
        memset(dp,-1,sizeof(dp));
        int n1=s1.size();
        int n2=s2.size();
        int n3=s3.size();
        return solve(s1,s2,s3,n1-1,n2-1,n3-1);
    }
};
