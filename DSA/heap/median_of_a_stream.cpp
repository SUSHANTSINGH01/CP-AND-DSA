class Solution
{
    public:
    //Function to insert heap.
    priority_queue<int>p;
    priority_queue<int,vector<int>,greater<int>>pq;
    void insertHeap(int &x)
    {
        if (p.empty()||x<p.top())
        p.push(x);
        else 
        pq.push(x);
       
        if (p.size()<pq.size())
        {
            p.push(pq.top());
            pq.pop();
        }
        
        else if (p.size()>pq.size() + 1)
        {
            pq.push(p.top());
            p.pop();
        }
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
        
    }
    
    //Function to return Median.
    double getMedian()
    {
        return p.size()>pq.size()?p.top():(p.top()+pq.top())/2.0;
    }
};
