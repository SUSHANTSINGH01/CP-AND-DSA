class Solution {
public:
    string addStrings(string num1, string num2) {
        
        int i=num1.length();
        int j=num2.length();
        i--;
        j--;
        string s;
        int c=0;
        while(i>=0 || j>=0 || c)
        {
            int a=(i>=0)?num1[i--]-'0':0;
            int b=(j>=0)?num2[j--]-'0':0;
            int sum=a+b+c;
            s.append(to_string(sum%10));
            c=sum/10;
            sum%=10;
        }
        reverse(s.begin(), s.end());
        return s;
    }
};
