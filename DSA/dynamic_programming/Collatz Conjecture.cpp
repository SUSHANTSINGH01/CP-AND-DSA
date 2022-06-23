long Solution::solve(int A, int B) {
    
      B--;
      long long int A1=A;
      while(B--)
      {
          if(A1%2==0)
          A1/=2;
          
          else
          A1=(3*A1)+1;
          
      }
    return A1;
}
