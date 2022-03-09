class Solution {
public:
    string convertToBase7(int num) {
        string res="";
        int n;
        int f=0;
        if(num<0)
        {
            f=1;
            num*=-1;   
        }
        while(num>=7)         
        {
            n=num%7;          
            res+=to_string(n);
            num=num/7;
        }
        res+=to_string(num);
        if(f==1)                 
        res+="-";
        reverse(res.begin(),res.end());  
        return res;
    }
};
