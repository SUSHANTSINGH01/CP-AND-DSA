int Solution::trailingZeroes(int A) 
{
      int c=0;
      for(int i=5;i<=A;i*=5)
      c+=(A/i);
      return c;
}
