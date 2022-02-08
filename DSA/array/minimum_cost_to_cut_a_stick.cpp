class Solution {
public:
    vector<vector<int>> dp;
    
    int solve(int i, int j, vector<int> &res) 
    {
        int temp=dp[i][j];
        
        if(temp>-1) 
        return temp;
        
        if(j-i==1) 
        return temp=0;
        
        if(dp[i][j]!=-1)
        return dp[i][j];
        temp=1e9;
        
        for (int k=i+1;k<j;k++) 
        {
            int cur=solve(i,k,res)+solve(k,j,res);
            temp=min(cur,temp);
        }
        
        temp+=res[j]-res[i];
        return dp[i][j]=temp;
    }
    int minCost(int n, vector<int>& cuts)
    {
         int l=cuts.size();
        vector<int>res(l+2);
        res[0]=0;
        sort(cuts.begin(), cuts.end());
        
        for(int i=1;i<=l;i++) 
        res[i]=cuts[i-1];
       
        res[l+1]=n;
        
        dp.resize(l+2,vector<int>(l+2,-1));
        
        return solve(0,l+1, res);
        
    }
};
