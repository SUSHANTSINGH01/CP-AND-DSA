long long int maxSum(int arr[], int n)
{
   int i=0;
   int j=n-1;
   sort(arr,arr+n);
   long long int sum=0;
   int ptr=0 ;
   while(i<j)
   {
       sum+=arr[j]-arr[i];
       if(ptr==0)
       {
           i++;
           ptr++;
       }
       else
       {
           j--;
           ptr--;
       }
   }
   sum+=arr[n/2]-arr[0];
   return sum;
}
