class Solution {
public:
    pair<int, int>solve(string s)
    {
        int pos = s.find('+');
        int real = stoi(s.substr(0, pos));
        int imag = stoi(s.substr(pos+1,s.length()-1));
        return { real, imag };
    }
    string complexNumberMultiply(string num1, string num2) 
    {
        
        pair<int, int> p1=solve(num1);
        pair<int, int> p2=solve(num2);
       
        int realA = p1.first;
        int realB = p2.first;
        int imagA = p1.second;
        int imagB = p2.second;
        
        string res = to_string(realA * realB - imagA * imagB) + '+' + to_string(realA * imagB + realB * imagA) + 'i';
        
        return res;
    }
};
