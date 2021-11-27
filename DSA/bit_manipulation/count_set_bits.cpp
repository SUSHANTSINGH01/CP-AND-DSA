int countSetBits(int n)
    {
       int c=1;
       int sum=0;
       
       if(n==1 || n==2) 
       return n;
       
       while(c<n)
       {
           c=c*2;
       }
       
       if(n==c) 
       return 1+countSetBits(c-1);
       
       c=c/2;
       sum += (c/2)*log2(c);
       sum += (n-c+1);
       sum += countSetBits(n-c);
       return sum;
    }

// optimal solution

class Solution{
    public:
   
    int countSetBits(int n)
    {
        // Your logic here
        n++;
        int power=2;
        int c=n/2;
        while (power<=n) 
        {
            int temp = n/power;
            c+=(temp/2)*power;
             c+=(temp & 1) ? (n % power) : 0;
             power<<=1;
        }
    
    return c;
    }
};
