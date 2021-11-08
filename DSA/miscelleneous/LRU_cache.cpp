class LRUCache {
public:
    unordered_map<int,int>mp;
    unordered_map<int,int>priority;
    queue<int>q;
    int length;
    
    void add_queue(int key) 
    {
        q.push(key);
        priority[key]++;
    }
    
    LRUCache(int capacity) 
    {
        length=capacity;
    }
    
    int get(int key)
    {
        
        auto it=mp.find(key);
        if(it==mp.end()) 
        return -1;
        add_queue(key);
        return it->second;
    }
    
    void put(int key, int value) 
    {
        
        
        if(mp.size()<length) 
        {
              mp[key]=value;
              add_queue(key);
              return;
         }
         auto it=mp.find(key);
         if(it!=mp.end()) 
         {
             it->second=value;
             add_queue(key);
             return;
         }
         while(true) 
         {
             int cur=q.front();
             q.pop();
             priority[cur]--;
             if(priority[cur]==0) 
             {
                 mp.erase(cur);
                 break;
             }
         }
        mp[key]=value;
        add_queue(key);
    
    }
};
