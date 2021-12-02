class Solution {
public:
    int minCost(string s, vector<int>& cost) 
    {
         int t_cost=0;
        int maxx=cost[0];
        for(int i=1; i<s.size(); i++)
        {
            if(s[i]==s[i-1])
            {
                if(cost[i]>maxx)
                {
                    t_cost+=maxx;
                    maxx=cost[i];
                }
                else 
                t_cost+=cost[i];
            }
            else 
            maxx=cost[i];
        }
        return t_cost;
    }
};
