class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) 
    {
        int n1=tasks.size();   
        unordered_map<char, int>mp;
        priority_queue<int>pq;
        
        for(int i=0;i<n1;i++)
        mp[tasks[i]]++;
        
        for(auto it:mp)
        pq.push(it.second);
        
        int res=0;
        
        while(!pq.empty())
        {
            
            int top=pq.top(); 
            pq.pop();
            vector<int>vec;
            top--;
           
            if(top>0)
            vec.push_back(top);
           
            int i=0;
            res++;
           
            while(i<n && !pq.empty())
            {
                if(pq.top()>1)
                vec.push_back(pq.top()-1);
                pq.pop();
                res++;
                i++;
            }
           
            if(i<n && vec.size()>0) 
            res+=(n-i);
            
            for(int i=0; i<vec.size(); i++)
            pq.push(vec[i]);
        }
        return res;
    }
};
