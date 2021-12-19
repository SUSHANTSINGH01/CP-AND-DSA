class Solution {
public:
	int isNegativeWeightCycle(int n, vector<vector<int>>edges){
	    vector<int>ans(n, INT_MAX);
    	ans[0] = 0;
    
    	for(int i=1; i<=n-1; i++) 
    	{
    	    for(auto it : edges) 
    	    {
    	          
    	        if(ans[it[0]]==INT_MAX) 
    	        continue;
    	        if(ans[it[0]] + it[2] < ans[it[1]]) 
    	        ans[it[1]] = ans[it[0]] + it[2];
    	    }
    	}
    	for(auto& it: edges) 
    	{
    	    if(ans[it[0]] + it[2] < ans[it[1]]) 
            return 1;
        }
        return 0;
	}
};
