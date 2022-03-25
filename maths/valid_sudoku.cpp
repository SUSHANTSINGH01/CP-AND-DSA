int Solution::isValidSudoku(const vector<string> &A) 
{
    int row[9][9] = {0};
    int col[9][9] = {0};
    int cube[9][9] = {0};
            
    for(auto i=0; i<A.size(); i++)
    {
        for(auto j=0; j<A.size(); j++)
        {
            if(A[i][j]!= '.')
            {
                int ch=A[i][j]-'0' - 1;
                int k = i/3 * 3 + j/3;
            
                if(row[i][ch]++ || col[j][ch]++ || cube[k][ch]++)
                return 0;
            }
            
        }
    }

    return 1;
}
