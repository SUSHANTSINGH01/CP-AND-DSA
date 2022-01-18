class Solution {
public:
    int maxPoints(vector<vector<int>>& points) 
    {
         int n=points.size();
         int c=1;
         for(int i=0; i<n; i++) 
         {
            unordered_map<double, int>mp;
            unordered_map<double, int>mp_x;
            unordered_map<double, int>mp_y;
			
            for(int j=i+1; j<n; j++) 
            {
                if(points[i][1] == points[j][1]) 
                {
                    mp_y[points[i][1]]++;
                    c = max(c, mp_y[points[i][1]]+1);   
                    
                } 
                else if(points[i][0] == points[j][0]) 
                {
                    mp_x[points[i][0]]++;
                    c = max(c, mp_x[points[i][0]]+1);  
                } 
                else 
                {
                    double slope = double(points[i][1] - points[j][1])/(points[i][0] - points[j][0]);
                    mp[slope]++;
                    c = max(c, mp[slope]+1);   
                }
            }
        }
        return c;
    }
};
