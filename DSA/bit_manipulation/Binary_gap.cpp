class Solution {
public:
     int binaryGap(int n) 
     {
        int dist = 0;
        int maxx = 0;
        int f = 0;
        while(n)
        {
            if(n&1)
            {
                f = 1;
                maxx = max(maxx,dist);
                dist = 1;
            }
            else if(f)
            dist++;
            n = n>>1;
        }
        
        return maxx;
    }
};
