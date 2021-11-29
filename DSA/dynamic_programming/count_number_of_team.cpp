class Solution {
public:
    int numTeams(vector<int>& rating) 
    {
        int n = rating.size();
        int team = 0;
        for(int i=1; i<n-1; i++)
        {
            int leftless=0;
            int rightgreater=0; 
            int leftgreater=0;
            int rightless = 0;
            
            for(int j=i-1; j>=0; j--)
            {
                if(rating[j]>rating[i])
                leftgreater++;
                else
                leftless++;
            }
            
            for(int j=i+1; j<n; j++)
            {
                if(rating[j]>rating[i])
                rightgreater++;
                else
                rightless++;
            }
            team += (leftless*rightgreater) + (leftgreater*rightless);
        }
        return team;
    }
};
