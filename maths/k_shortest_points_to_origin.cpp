class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) 
    {
        vector<pair<int,int>>vec;
        vector<vector<int>>ret;
        int n=points.size();
        
        for(int i=0;i<n;i++)
        {
            int x=points[i][0];
            int y=points[i][1];
            
            int res=(x*x)+(y*y);
            
            vec.push_back({res,i});
        }
        
        sort(vec.begin(),vec.end());
        
        int i=0;
        
        for(auto  it=vec.begin();i<k && it!=vec.end(); i++,it++)
        ret.push_back({points[it->second][0],points[it->second][1]});
                                              
        return ret;                                        
    }
};
