long Solution::solve(string A) {
     int n=A.size();
     long long int sum=0;
     for(int i=0;i<n;i++)
     {
         string res="";
         if(A[i]>='0' && A[i]<='9')
         {
             while(i<n && A[i]>='0' && A[i]<='9')
             res+=A[i++];
             
             sum+=stoll(res);
         }
     }
     return sum;
}
