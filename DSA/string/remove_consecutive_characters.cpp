string Solution::solve(string A, int B) 
{
    int n=A.size();
    int freq[n]={0};
    int c=1;
    string str="";
    string ans="";
    str+=A[0];
    for(int i=1;i<n;i++)
    {
        if(c==B)
        {
            c=1;
            str=A[i];
            continue;
        }
        if(A[i]==A[i-1])
        {
            c++;
            str+=A[i];
        }
        else
        {
            c=1;
            ans+=str;
            str=A[i];
        }
    }
    if(c!=B)
    ans+=str;
    return ans;
    
}
