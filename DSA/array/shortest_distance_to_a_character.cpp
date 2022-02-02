vector<int>ans;
        
        unordered_set<int>us;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == c){
                us.insert(i);
            }
        }
        
        for(int i = 0; i<s.size(); i++){
            int sd = INT_MAX;
            for(int x: us){
                sd = min(sd, abs(i-x));
            }
            ans.push_back(sd);
        }
        
        return ans;
}
};
