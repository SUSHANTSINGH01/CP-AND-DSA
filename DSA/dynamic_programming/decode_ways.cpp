class Solution {
public:
    int numDecodings(string s) {
        
        vector<int>dp={1, s[0]>'0'};
        for (int i=1;i<s.size();i++)
        {
            
            if(s[i-1]=='2' && s[i]<'7' || s[i-1]=='1')
            dp[(i+1)%2]=dp[(i-1)%2]; 
            else
            dp[(i+1)%2]=0;
            if(s[i]>'0')
            dp[(i+1)%2]+=dp[i%2];
            
        }
	    return dp[s.size()%2];
    }
};
