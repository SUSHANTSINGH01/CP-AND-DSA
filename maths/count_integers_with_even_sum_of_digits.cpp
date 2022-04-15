class Solution {
public:
    bool even(int num)
    {
        int sum=0;
        while(num)
        {
            sum+=(num%10);
            num/=10;
        }
        return sum%2==0;
    }
    int countEven(int num) 
    {
        int c=0;
        for(int i=1;i<=num;i++)
        {
            if(even(i))
            c++;
        }
        return c;  
    }
};
