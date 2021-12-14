class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) 
    {
        vector<int>v1;
        vector<int>v2;
        
        for(int i=0;i<coordinates.size();i++)
        {
            v1.push_back(coordinates[i][0]);
            v2.push_back(coordinates[i][1]);
        }
        
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        
        for(int i=0;i<coordinates.size()-1;i++)
        {
            if(abs(v1[i+1]-v1[i])>1)
            return 0;
            if(abs(v2[i+1]-v2[i])>1)
            return 0;
            
        }
        
        return 1;
        
    }
};
