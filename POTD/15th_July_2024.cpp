class Solution {
  public:
    string smallestNumber(int s, int d) {
        // code here
        string res="";
        int d1=d;
        
        if(d*9<s)
        return "-1";
        
        while(d--){
            
            int temp=9;
            
            while(d>0 && (s-temp)<(1)){
                temp--;
            }
            
            if(d==0)
            temp=s;
            
            s-=temp;
            res+=to_string(temp);
        }
        reverse(res.begin(),res.end());

        return res;
    }
};
