class Solution {
public:
    int reverse(int x) 
    {
         int k=x;
         int y=0;
         while(k)
         {
             if(y<INT_MIN/10 || y>INT_MAX/10)
             return 0;
             y*=10;
             
             y+=(k%10);
             k/=10;
         }
         return y;    
    }
};
