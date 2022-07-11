    bool is_safe(int row,int col,char val,vector<vector<char>>&grid)
    {
        
          for(int i=0;i<9;i++)
          {
                if(grid[row][i]==val)
                return 0;
                
            
                if(grid[i][col]==val)
                return 0;
            
                
                if(grid[3*(row/3)+i/3][3*(col/3)+i%3]==val)
                return 0;
         }
         return 1;
    }
    bool Solve(vector<vector<char>>&grid)  
    { 
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                  //cout<<i<<" "<<j<<" "<<endl;
                if(grid[i][j]=='.')
                {
                     for(char k=49;k<=57;k++)
                     {
                        // cout<<k<<endl;
                         if(is_safe(i,j,k,grid))
                         {
                            grid[i][j]=k;
                            bool pos=Solve(grid);
                            if(pos)
                            return 1;
                            else
                            grid[i][j]='.';
                          }
                     }
                     return 0;
                 }
                 
              }
            }
        return 1;
    }
    
void Solution::solveSudoku(vector<vector<char> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    Solve(A);
}
