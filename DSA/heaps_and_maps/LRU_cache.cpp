    
    unordered_map<int,int>val;
    unordered_map<int,int>mp;
    int cap;
    int cnt;
    int t;
    queue<pair<int,int>> q;
    
   
LRUCache::LRUCache(int capacity) 
{
    val.erase(val.begin(), val.end());
    mp.erase(mp.begin(), mp.end());
    cap = capacity;
    cnt = 0;
    t=0;
}

int LRUCache::get(int key) 
{
        if(cnt>0){
        auto it=mp.find(key);
        if(it==mp.end()){
        return -1;
        }
        mp[key]=t++;
        q.push({key,mp[key]});
        return val[key];
        }
        return -1;
}

void LRUCache::set(int key, int value) 
{
        auto it=mp.find(key);
        if(it!=mp.end())
        {
            mp[key]=t++;
            val[key]=value;
            q.push({key,mp[key]});
        }
        else
        {
            if(cnt<cap)
            {
                val[key]=value;
                mp[key]=t++;
                q.push({key,mp[key]});
                cnt++;
            }
            else
            {
                while(!q.empty() && (mp.find(q.front().first)==mp.end() || mp[q.front().first]!=q.front().second))
                {
                    q.pop();
                }
                if(!q.empty())
                {
                    pair<int,int> p=q.front();
                    q.pop();
                    mp.erase(p.first);
                    val.erase(p.first);
                    cnt--;
                }
                val[key]=value;
                mp[key]=t++;
                q.push({key,mp[key]});
                cnt++;
            }
        }
}
