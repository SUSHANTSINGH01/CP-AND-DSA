class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) 
    {
        long long int num = numerator;
        long long int denom = denominator;
        
        string ans = "";
        long long int  q = numerator/denom;
        long long int r = numerator%denom;
        if((numerator>0 && denominator>0) || (numerator<0 && denominator<0))
        ans += to_string(abs(q));
        
        else if(q==0 && r!=0 && (numerator<0 || denom<0) )
        ans += '-' + to_string(q);
        
        else
        ans += to_string(q);
        
         r = abs(r);
         q = abs(q);
        denom = abs(denom);
        
        if(r==0)
        return ans;
        
        else
        {
            unordered_map<long long int,long long int> mp;
            ans += '.';
            while(r!=0)
            {
                if(mp.find(r)!=mp.end())
                {
                    int pos=mp[r];
                    ans.insert(pos, "(");
                    ans+=')';
                    return ans; 
                }
                else
                {
                    mp[r] = ans.length();
                    r *= 10;
                    q = r/denom;
                    r = r%denom;
                    ans += q+'0';
                }
            }
        }
        return ans;
    }
};
