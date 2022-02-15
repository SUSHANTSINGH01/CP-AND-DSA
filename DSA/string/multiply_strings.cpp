string Solution::multiply(string A, string B) 
{
        if(A=="0"||B=="0")
        return "0";
        
        int n=A.length();
        int m=B.length();
        
        string res="";
        for(int i=0;i<n+m;i++)
        res+="0";

        for(int i=n-1;i>=0;i--)
        {
            for(int j=m-1;j>=0;j--)
            {
                int temp=(A[i]-'0')*(B[j]-'0')+res[i+j+1]-'0';
                res[i+j+1]=temp%10+'0';
                res[i+j]+=temp/10;
            }
        }
        
        for(int i=0;i<res.length();i++)
        if(res[i]!='0')
        return res.substr(i);
        
        return "0";
}
