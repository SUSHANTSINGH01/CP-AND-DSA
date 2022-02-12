class Solution {
public:
   
    vector<int> closestRoom(vector<vector<int>>& rooms, vector<vector<int>>& queries) {       
       for (int i = 0; i < queries.size(); ++i) 
           queries[i].push_back(i); 
        
        sort(rooms.begin(), rooms.end(), [](auto& lhs, auto& rhs)
             { 
                 return lhs[1] > rhs[1]; 
             }); 
        sort(queries.begin(), queries.end(), [](auto& lhs, auto& rhs)
             { 
                 return lhs[1] > rhs[1]; 
             }); 
        unordered_map<int,int>mp;
        for(auto it : rooms)
        {
            mp[it[0]]=it[1];
           //cout<<it[0]<<" "<<it[1]<<endl;
        }
        
        // for(auto it : queries)
        // cout<<it[0]<<" "<<it[1]<<endl;
        
        set<int> st; 
        vector<int> ans(queries.size(), -1); 
        for (int i = 0, k = 0; i < queries.size(); ++i) 
        {
            while (k < rooms.size() && rooms[k][1] >= queries[i][1]) 
                st.insert(rooms[k++][0]);
           if(st.size()>0)
           {
                auto it = st.upper_bound(queries[i][0]); 
                int diff = INT_MAX; 
                if(it != st.end()) 
                diff = *it - queries[i][0]; 
                if(it != st.begin() && queries[i][0] - *prev(it) <= diff) --it; 
                ans[queries[i][2]] = *it; 
           }
        }
        return ans; 
    }
};
