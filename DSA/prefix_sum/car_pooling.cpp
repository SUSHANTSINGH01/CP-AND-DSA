class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) 
    {
        vector<pair<int, int>>ans;
        for(auto it:trips) 
        {
            ans.push_back({it[1], it[0]});
            ans.push_back({it[2], -it[0]});
        }
        
        int temp = 0;
        sort(ans.begin(), ans.end());
       
        for(int i=0; i<ans.size(); i++) 
        {
            temp += ans[i].second;
            if(temp > capacity) 
            return false;
        }
        return true;
    }
};
