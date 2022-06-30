void solve1(string str, int k, string &maxx)
{
   
    if(k==0)
    return;
 
    int n=str.length();
    for(int i=0; i<n-1; i++) 
    {
        for(int j=i+1; j<n; j++) 
        {
            
            if (str[i] < str[j]) 
            {
                
                swap(str[i], str[j]);
 
                if(str>maxx)
                maxx=str;
 
                solve1(str, k-1, maxx);
                swap(str[i], str[j]);
            }
        }
    }
}

string Solution::solve(string A, int B) 
{
    string res="";
    solve1(A,B,res);
    return res;
}
