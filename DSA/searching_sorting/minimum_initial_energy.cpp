class Solution {

    static bool mycomp(const vector<int>& v1, const vector<int>& v2)
    {
        return v1[1]-v1[0]> v2[1]-v2[0];
    }
    
public:
    int minimumEffort(vector<vector<int>>& tasks) {
        
       sort(tasks.begin(), tasks.end(), mycomp);
        
        int curr=0; 
        int res=0;
        int n=tasks.size();
        for(int i=0; i<n; i++)
        {
            if(curr<tasks[i][1])
            {
                int temp=(tasks[i][1]-curr);
                res+=temp;
                curr+=temp;
            }
            curr-=tasks[i][0];
        }
        return res;
    }
};
