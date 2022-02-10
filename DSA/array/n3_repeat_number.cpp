int Solution::repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A.size();
    int minn1=INT_MAX;
    int minn2=INT_MAX;
    int c1=0;
    int c2=0,i;
    for(i=0;i<n;i++)
    {
    	if(c1>0 && A[i]==minn1)
    	c1+=1;
    	else if(c2>0 && A[i]==minn2)
    	c2+=1;
    	else if(c1==0)
        {
    		minn1=A[i];
    		c1=1;
    	}
        else if(c2==0)
        {
    		minn2=A[i];
    		c2=1;
    	}
        else
        {
    		c1--;
    		c2--;
    	}
    }
    if(c1==0 && c2==0)
    return -1;
    c1=0;
    c2=0;
   for(int i=0;i<n;i++)
   {
       if(A[i]==minn1) 
       c1++;
       else if(A[i]==minn2) 
       c2++;
   }
   if(c1>n/3) 
   return minn1;
   else if (c2>n/3) 
   return minn2;
   
    return -1;
}
