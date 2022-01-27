class Solution {
public:
    string baseNeg2(int n) 
    {
        if(n==0) 
        return "0";
        string res="";
        while(n)
        {
            res=to_string(abs(n%2))+res;
            if(abs(n)%2)
            {
                if(n<0) 
                n=n/-2+1;
                else 
                n=n/-2;
            } 
            else 
            n=n/-2;
        }
        return res;
    }
};
