class Solution{
public:
    int minValue(string s, int k)
    {
        // code here
       vector<int>v(27,0);
       for(char c : s)
       v[c-'a'+1]++;
       
       priority_queue<int>pq;
       for(auto it : v)
       pq.push(it);
       
       while(k--)
       {
           int x = pq.top();
           pq.pop();
           --x;
           pq.push(x);
       }
       int ans = 0;
       while(!pq.empty())
       {
           ans += pq.top()*pq.top();
           pq.pop();
       }
       return ans;
    }
};
