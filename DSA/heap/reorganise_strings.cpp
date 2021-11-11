class Solution {
public:
   
   
    string reorganizeString(string s) 
    
    {
       int n = s.length();
       string str;
       unordered_map<char,int>mp;
       priority_queue<pair<int,char>>maxHeap;
    
     
    for(char c:s)
    mp[c]++;
    
    
    for(auto i:mp)
    maxHeap.push({i.second,i.first}); 
    
    
    
    while(maxHeap.size()>1)
    {
        
        auto l=maxHeap.top();
        maxHeap.pop();
        auto r=maxHeap.top();
        maxHeap.pop();
        
        str+=l.second;
        str+=r.second;
        
        mp[l.second]--;
        mp[r.second]--;
        
        
        if(mp[l.second] > 0)
            maxHeap.push({mp[l.second],l.second});
        if(mp[r.second] > 0)
            maxHeap.push({mp[r.second],r.second});
    } 
    
                  
    if(!maxHeap.empty())
    {
        auto last = maxHeap.top();
        if(last.first>1)
        return "";
        str+=last.second; 
    }
    
     return str;   
    }
    
};
