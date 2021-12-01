class Solution
{
public:
    int wordBreak(string A, vector<string> &B) 
    {
        //code here
        unordered_set<string>st(B.begin(), B.end());
        int n = A.length();
        vector<bool>dp(n+1, false);
        dp[n] = 1;
       
       for(int i=n-1;i>=0;i--)
       {
           string res = "";
           for(int j=i;j<n;j++)
           {
               res+=A[j];
               if(st.find(res)!=st.end())
               dp[i]=dp[i] || dp[j+1];
            }
       }
       
       return dp[0];
    }
};
