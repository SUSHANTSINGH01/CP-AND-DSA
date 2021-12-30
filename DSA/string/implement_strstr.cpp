int Solution::strStr(const string A, const string B) 
{
        int n=A.size();
        int m=B.size();
        if(m>n)
        return -1;
        if(n<=0||m<=0)
        return 0;
        int pos=0;
        for(int i=0;i<n-m+1;i++)
        {
            if(B[pos]!=A[i])
            continue;
            int index=i;
            while(B[pos]==A[index])
            {
              pos++;
              index++;
              if(pos==m)
              return i;
              else if(pos>=m||index>=n)
              break;
           }
           pos=0;
        }
    return -1;
    
}
