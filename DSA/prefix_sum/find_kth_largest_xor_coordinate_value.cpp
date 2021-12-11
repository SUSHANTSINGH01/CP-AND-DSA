class Solution {
public:
    int kthLargestValue(vector<vector<int>>& matrix, int k) 
    {
        priority_queue<int,vector<int>,greater<int>> pq;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            int temp=0;
            for(int j=0;j<m;j++)
            {
                temp^=matrix[i][j];
                int top=(i) > 0 ? matrix[i-1][j] : 0;
                
                matrix[i][j]=temp^top ;
                pq.push(temp ^ top);
                
                if(pq.size()>k)
                pq.pop();
                
            }
        }
       
        return pq.top();
        
    }
};
