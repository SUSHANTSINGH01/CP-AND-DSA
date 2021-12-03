class Solution{
public:
int dp[585][585];
    bool isPalindrome(string String, int i, int j)
    {
            while(i<j)
            if(String[i++] != String[j--])
            return false;
            return true;
    }
    int min_Partion(string &String, int i, int j)
    {
        cout<<i<<j<<endl;
        if(dp[i][j]!=-1)
        return dp[i][j];
        
        if(i>=j || isPalindrome(String, i, j))
        return 0;
        
        int ans = INT_MAX;
        int c=0;
        
        for(int k=i;k<j;k++)
        {
          c = 1 + min_Partion(String, i, k) + min_Partion(String, k + 1, j);
          ans=min(ans, c);
        }
        
        return dp[i][j]=ans;
    }
    int palindromicPartition(string str)
    {
        memset(dp,-1,sizeof(dp));
        return min_Partion(str,0,str.size()-1);
        // code here
    }
};
