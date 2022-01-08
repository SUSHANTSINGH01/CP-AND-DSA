class Solution {
public:
    bool isThree(int n) {
        
        int i=1;
        int c=0;
        while((c<=3) & (i<=n))
        {
            if((n%i)==0)
            c++;
            
            i++;
        }
        return c==3;
        
    }
};
