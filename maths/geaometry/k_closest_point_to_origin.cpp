class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) 
    {
        vector<pair<long long int,int>>vp;
        
        for(int i=0;i<points.size();i++)
        {
            int x=points[i][0];
            int y=points[i][1];
            
            long long int res = (x*x)+(y*y);
            
            vp.push_back({res,i});
        }
        
        sort(vp.begin(),vp.end());
        vector<vector<int>>ans;
        
        int i=0;
        
        for(auto  it=vp.begin();i<k&&it!=vp.end();i++,it++)
        {
            ans.push_back({points[it->second][0],points[it->second][1]});
        }
                                                        
        return ans;                                        
    }
};
