int arr2[n+1][x+1];
 for(int i=0;i<=n;i++)
 {
     for(int j=0;j<=x;j++)
     arr2[i][j]=0;
 }
 for(int i=1;i<n+1;i++)
 {
     for(int j=1;j<x+1;j++)
     {
     if(arr[i-1]<=j)
     arr2[i][j]=max(arr1[i-1]+arr2[i-1][j-arr[i-1]],arr2[i-1][j]);
     else
     arr2[i][j]=arr2[i-1][j];
     }
 }
 cout<<arr2[n][x];
