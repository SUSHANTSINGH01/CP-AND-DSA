class comp
    {
        public : 
             bool operator()(pair<string,int> a,pair<string,int> b)
            {
                if(a.second == b.second)
                return a.first > b.first;

                return a.second < b.second;
            }
};

class Solution {
public:
    
    vector<string> topKFrequent(vector<string>& words, int k) 
    {
        vector<string>ans;
        
        map<string,int>mp;
        int maxx=INT_MIN;
        for(int i=0;i<words.size();i++)
        mp[words[i]]++;
           
        
        priority_queue<pair<string,int> , vector<pair<string,int> > , comp> pq(mp.begin(),mp.end());

        while(k-->0)
        {
            ans.push_back(pq.top().first);
            pq.pop();
        }
        return ans;        
    }
};
