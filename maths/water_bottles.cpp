class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) 
    {
      int rem=0;
      int sum=0;
        sum+=numBottles;
        int n=numBottles;
        while(n>=numExchange)
        {
            sum+=n/numExchange;
            n=(n/numExchange)+(n%numExchange);
            
        }
        return sum;
    }
};
