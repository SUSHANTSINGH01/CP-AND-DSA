class Solution {
  public:
    int myAtoi(char *s) {
        // Your code here
        int i=0; 
        int n=strlen(s);
        long long res=0;
        int sign=1;
        while(i<n && (s[i]==' ' || s[i]=='0')) 
        i++;
        if(i<n && (s[i]=='+' || s[i]=='-')){
            if(s[i]=='-')
            sign=-1;
            else
            sign=1;
            i++;
        }
        while(i<n && s[i]>='0' && s[i]<='9'){
            res=res*10+(s[i]-'0');
            if(res*sign>INT_MAX) 
            return INT_MAX;
            if(res*sign<INT_MIN) 
            return INT_MIN;

            i++;
        }
        return res*sign;
    }
};
