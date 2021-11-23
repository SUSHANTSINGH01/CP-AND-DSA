int Solution::lengthOfLastWord(const string A) 
{
     int ans=0;
    for(int i=A.size()-1;i>=0;i--)
    {
        char ch=A[i];
        if(isspace(ch))
        {
            if(ans!=0)
            return ans;
            
            else
            ans=0;    
        }
        else
        ans++;    
        
    }
    return ans;
}
