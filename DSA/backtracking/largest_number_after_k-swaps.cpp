class Solution
{
    public:
    //Function to find the largest number after k swaps.
    void solve(string str, string &ans, int k, int pos)
    {
        if(k == 0)
        return;
            
        char maxx=str[pos];
        for(int i=pos+1;i<str.length();i++)
        {
            if(maxx<str[i])
            maxx=str[i];
        }
        
        if(maxx!=str[pos])
        k--;
            
        for(int i=str.size()-1; i>=pos;i--)
        {
            if(str[i]==maxx)
            {
                swap(str[i], str[pos]);
                if(str.compare(ans) > 0)
                ans=str;
                    
                solve(str,ans, k, pos+1);
                
                swap(str[i], str[pos]);
            }
        }
    }
    
    string findMaximumNum(string str, int k)
    {
       // code here.
       string ans=str;
       solve(str,ans,k,0);
       return ans;
    }
};
