class Solution {
public:
      bool hasWon(vector<vector<char>>&board,char c)
         {
       
            for(int i=0;i<3;i++)
            {
                if(board[i][0]==board[i][1] && board[i][1]==board[i][2] && board[i][0]==c)
                return true;

                if(board[0][i]==board[1][i] && board[1][i]==board[2][i] && board[1][i]==c)
                return true;

            }
    
            if(board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[0][0]==c)
            return true;

            if(board[0][2]==board[1][1] && board[1][1]==board[2][0] && board[0][2]==c)
            return true;
             
            return false;
       }
    string tictactoe(vector<vector<int>>& vec) 
    {
        vector<vector<char>>board(3,vector<char>(3,' '));
        int n=vec.size();
        for(int i=0;i<n;i++)
        {
            board[vec[i][0]][vec[i][1]]=i%2==0?'x':'o';
            
            if(hasWon(board,'x'))
            return "A";
            
            if(hasWon(board,'o'))
            return "B";
            
        }
         
        for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
        {
                if(board[i][j]==' ')
                return "Pending";
        }
        return "Draw";
    }
};
