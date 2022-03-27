class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) 
    {
         sort(costs.begin(), costs.end());
         int res=0;
         for(int it : costs)
         {
            if(it<=coins)
            {
                coins-=it;
                res++;
            }
            
            else
            break;
        }
        return res;
    }
};
