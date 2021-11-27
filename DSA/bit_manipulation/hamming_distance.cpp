class Solution {
public:
    int hammingDistance(int x, int y)
    {
            int c=0;
            while(x || y)
            {
                c+=abs((x%2)-(y%2));
                x/=2;
                y/=2;
            }
            return c;
    }
};
