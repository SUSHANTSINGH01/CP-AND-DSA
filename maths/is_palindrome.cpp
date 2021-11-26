class Solution {
public:
    bool isPalindrome(int x) 
    {
         if(x<0) 
         return false;
         long long int rev=0;
         long long int m=x;
         while(m)
         {
            rev=rev*10+m%10;
            m/=10;
        }
        return rev==x;
 
    }
};
