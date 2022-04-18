long Solution::solve(int A, int B) {

long long int sum=0;

    while(A<=B)
    {
        if(A%7==0)
        break;

        A++;
    }

    while(B>=A)
    {
        if(B%7==0)
        break;

        B--;

    }
//   cout<<A<<" "<<B<<endl;
//   A=8;
if(A%7!=0 || B%7!=0)
return 0;
    if(A==B)
    return A;
   if((B/7-A/7)==1)
   return A+B;
   long long int  n=B/7-A/7;
   n++;
   sum=(n)*(2*A+(n-1)*7);
    return sum/2;
}
