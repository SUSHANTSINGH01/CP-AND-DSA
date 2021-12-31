string Solution::longestCommonPrefix(vector<string> &A) 
{
        if(A.size()==1)
        return A[0];
        int k=0;
        string ans="";
       
        string str=A[0];
        if(str.size()==0)
        return ans;
        for(int i=0;i<str.size();i++)
        {
            for(int j=1;j<A.size();j++)
            {
                if(k>=A[j].size()||str[i]!=A[j][k])
                return ans;
            }
            ans+=str[i];
            k++;
        }
        return ans;
}
