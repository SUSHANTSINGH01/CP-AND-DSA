class Solution {
    // Function to find a solved Sudoku.
    public static boolean isSafe(int row,int col,int val,int[][] grid)
    {
          for(int i=0;i<9;i++)
          {
                if(grid[row][i]==val)
                return false;
                
            
                if(grid[i][col]==val)
                return false;
            
                
                if(grid[3*(row/3)+i/3][3*(col/3)+i%3]==val)
                return false;
         }
         return true;
    }
    
    public static boolean solve(int[][] grid)  
    { 
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(grid[i][j]==0)
                {
                     for(int k=1;k<=9;k++)
                     {
                         if(isSafe(i,j,k,grid))
                         {
                            grid[i][j]=k;
                            boolean pos=solve(grid);
                            if(pos)
                            return true;
                            else
                            grid[i][j]=0;
                          }
                     }
                     return false;
                 }
                 
              }
            }
        return true;
    }

    static void solveSudoku(int[][] mat) {
        // code here
        solve(mat);
    }
}
