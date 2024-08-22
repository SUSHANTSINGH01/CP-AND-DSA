class Solution {
  public:
    string findOrder(string dict[], int n, int k) {
        // code here
        
        vector<vector<int>>adj(k);
        vector<int>indeg(k);
        
        string res="";
        queue<int>q;
        
        for(int i=1;i<n;i++){
            for(int j=0;j<dict[i-1].size() && j<dict[i].size();j++){
                if(dict[i-1][j]!=dict[i][j])
                {
                	adj[dict[i-1][j]-'a'].push_back(dict[i][j]-'a');
                	indeg[dict[i][j]-'a']++;
            		break;
            	}
            }
        }
        
        for(int i=0;i<k;i++){
        	if(indeg[i]==0)
        	q.push(i);
        }
        		
        while(q.size())
        {
        	int u=q.front();
        	res+=u+'a';
        	q.pop();
        	for(int it:adj[u]){
            	if(--indeg[it]==0)
        		q.push(it);
        	}
        }
        
        return res;
    }
};
