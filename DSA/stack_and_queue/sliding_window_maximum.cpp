

// Optimized solution


class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>pq;
        vector<int>res;
        int n=nums.size();
        int k1=0;
        while(k1<k){
            pq.push({nums[k1],k1});
            k1++;
        }
        res.push_back(pq.top().first);
        for(int i=k;i<n;i++){
            while(!pq.empty() && (pq.top().first<=nums[i] || (pq.top().second+k-1)<i)){
                pq.pop();
            }
            pq.push({nums[i],i});
            res.push_back(pq.top().first);
        }
        return res;
    }
};


// Second Solution


vector<int> Solution::slidingMaximum(const vector<int> &A, int B) 
{
        priority_queue<pair<int,int>>pq;
        int n=A.size();
        int maxx=INT_MIN;
        vector<int>res;
        
        for(int i=0;i<B;i++)
        {
            pq.push({A[i],i});
            maxx=max(maxx,A[i]);
        }
        
        res.push_back(maxx);
        for(int i=B;i<n;i++)
        {
            
            pq.push({A[i],i});
            
            if(pq.top().second>=i-B+1 && pq.top().second<=i)
            res.push_back(pq.top().first);
                
            else
            {
                
                while(!(pq.top().second>=i-B+1 && pq.top().second<=i))
                pq.pop();
                
                res.push_back(pq.top().first);
           }
        }
        return res;
}
