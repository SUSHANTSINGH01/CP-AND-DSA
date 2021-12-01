class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        
        int n=days.size();
        
        vector<int>dp(n+1, 0);
        
        for (int i=0; i<n; i++)
        {
            int week = upper_bound(days.begin()+max(0, i-8), days.begin()+i, days[i]-7)-days.begin()-1;
            int month = upper_bound(days.begin()+max(0, i-31), days.begin()+i, days[i]-30)-days.begin()-1;
            dp[i+1] = min(min(costs[0]+dp[i], costs[1]+(week>=0?dp[week+1]:0)), costs[2]+(month>=0?dp[month+1]:0));
        }
        return dp[n];
    }
};
