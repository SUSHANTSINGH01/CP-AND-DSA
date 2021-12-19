class Solution {
public:
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) 
    {
        
         unordered_map <string, unordered_map <string, double>> mp;
        for(int i = 0; i<equations.size(); i++)
        {
            double val = values[i];
            mp[equations[i][0]][equations[i][1]] = val;
            mp[equations[i][1]][equations[i][0]] = 1/val;
            mp[equations[i][0]][equations[i][0]] = 1.0;
            mp[equations[i][1]][equations[i][1]] = 1.0;
        }
      
        for(auto i:mp)
        {
            for(auto j : mp[i.first])
            for(auto k: mp[i.first])
            mp[j.first][k.first] = mp[j.first][i.first] * mp[i.first][k.first];
        }
        
        vector<double>ans;
        for(auto it : queries)
        {
            string st = it[0];
            string end = it[1];
            if((mp.find(st)!=mp.end()) && (mp[st].find(end)!=mp[st].end()))
            ans.push_back(mp[st][end]);
            else
            ans.push_back(-1.0);
        }
        return ans;
    }
};
