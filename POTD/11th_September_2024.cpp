class Solution {
  public:
    // Function to return the minimum cost of connecting the ropes.
    using lli = long long int;
    long long minCost(vector<long long>& arr) {
        // Your code here
        
        int n=arr.size();
        lli res=0;
        priority_queue<lli,vector<lli>,greater<lli>>pq;
        
        for(int i=0;i<n;i++)
        pq.push(arr[i]);
        
        while(pq.size()>1){
            lli f=pq.top();
            pq.pop();
            lli s=pq.top();
            pq.pop();
            pq.push(f+s);
            res+=(f+s);
        }
        
        return res;
    }
};
