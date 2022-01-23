class Solution {
public:
    int minFlips(string target) 
    {
        int n=target.size();
        int c=0;
       
        for(int i=1;i<n;i++)
        if(target[i]!=target[i-1])
        c++;
        
        if(target[0]=='0')
        return c;
        
        else
        return c+1;
    }
};
