// First Solution

class LRUCache {
public:
    unordered_map<int,int>mp;
    unordered_map<int,int>freq;
    queue<int>q;
    int length;
    
    LRUCache(int capacity) 
    {
       length=capacity;
    }
    int get(int key) {
        if(mp.find(key)==mp.end())
        return -1;
        
        freq[key]++;
        q.push(key);
        return mp[key];
    }
    
    void put(int key, int value) 
    {
        if(mp.size()<length || mp.find(key)!=mp.end())
        {
          mp[key]=value;
          q.push(key);
          freq[key]++;
          return;
        }
        else
        {
            while(1)
            {
                int temp=q.front();
                q.pop();
                freq[temp]--;
                if(freq[temp]==0)
                {
                    mp.erase(temp);
                    break;
                }
            }
            mp[key]=value;
            q.push(key);
            freq[key]++;
        }
        
    }
};



// Second Solution



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
