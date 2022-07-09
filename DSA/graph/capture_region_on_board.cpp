void Solution::solve(vector<vector<char> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int rows=A.size();
    int cols=A[0].size(); 
    vector<vector<bool>>dp(rows,vector<bool>(cols,0));
    
    if(rows==0)
    return;
    
    queue<pair<int,int>>q;
    for(int i=0;i<cols;i++)
    {
        if(A[0][i]=='O')
        {
            dp[0][i]=1;
            q.push({0,i});
        }
        if(A[rows-1][i]=='O')
        {
            dp[rows-1][i]=1;
            q.push({rows-1,i});
        }
    }
    
    for(int i=0; i<rows; i++)
    {
        if(A[i][0]=='O')
        {
            dp[i][0]=1;
            q.push({i,0});
        }
        if(A[i][cols-1] == 'O')
        {
            dp[i][cols-1]=1;
            q.push({i,cols-1});
        }
    }
    
    int i;
    int j;
    
    while(!q.empty())
    {
        i=q.front().first;
        j=q.front().second;
        q.pop();
        
        if(i-1>0 && A[i-1][j]=='O' && dp[i-1][j]==0)
        {
            dp[i-1][j]=1; 
            q.push({i-1, j});   
        } 
        
        if(i+1<rows-1 && A[i+1][j]=='O' && dp[i+1][j]==0)
        {
            dp[i+1][j]=1; 
            q.push({i+1,j});
        } 
        
        if(j-1>0 && A[i][j-1]=='O' && dp[i][j-1]==0)
        {
            dp[i][j-1]=1; 
            q.push({i,j-1});
            
        } 
        
        if(j+1<cols-1 && A[i][j+1]=='O' && dp[i][j+1]==0)
        {
            dp[i][j+1]=1; 
            q.push({i, j+1});   
        } 
    }
    
    for(int i=0;i<rows;i++)
    for(int j=0;j<cols;j++)
    if(A[i][j]=='O' && dp[i][j]==0)
    A[i][j]='X';
}
