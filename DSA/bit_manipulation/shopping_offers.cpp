class Solution {
public:
    int shoppingOffers(vector<int>& price, vector<vector<int>>& special, vector<int>& needs) 
    {
        int best_price = calculate_Offers(price, needs);
        for (auto &sp : special) 
        {
            substract_Offer(sp, needs);
            
            if(no_negatives(needs)) 
            {
                int withOffer = sp.back() + shoppingOffers(price, special, needs);
                best_price = min(best_price, withOffer);
            }
            add_Offer(sp, needs);
        }

        return best_price;
    }
    
    int calculate_Offers(vector<int>& price, vector<int>& needs) 
    {
        int totalPrice=0;
        for(int i=0;i<price.size();i++)
        totalPrice += price[i]*needs[i];
        return totalPrice;
    }
    
    void substract_Offer(vector<int>& special, vector<int>& needs) 
    {
        for(int i=0;i<needs.size();i++)
        needs[i]-=special[i];
    }
    
    void add_Offer(vector<int>& special, vector<int>& needs) 
    {
        for(int i=0;i<needs.size();i++)
        needs[i]+=special[i];
    }
    
    bool no_negatives(vector<int>& needs) 
    {
        for(int n:needs)
        if(n<0)
        return false;
        return true;
    }
};
