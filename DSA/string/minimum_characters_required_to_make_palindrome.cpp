vector<int> solve1(string str)
{
    int n=str.length();
    vector<int>lps(n);
 
    int len=0;
    lps[0]=0;
    int i=1;
    while(i<n)
    {
        if(str[i] == str[len])
        {
            len++;
            lps[i]=len;
            i++;
        }
        else
        {
           
            if (len != 0)
            len = lps[len-1];
 
            else 
            {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}


int Solution::solve(string A) 
{
        
    
    string revStr = A;
    reverse(revStr.begin(), revStr.end());
 
   
    string concat=A+"$"+revStr;
    vector<int> lps = solve1(concat);
 
    return (A.length()-lps.back());
}
