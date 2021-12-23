class Solution {

public:

    string addBinary(string a, string b) {

        

        int n=a.size()-1;

        int m=b.size()-1;

        int c=0;

        int curr;

        

        string ans="";

        

        for (;n>=0 || m>=0; n--,m--)

        {

            curr = (n>=0) ? a[n]-'0' : 0;

            curr += (m>=0) ? b[m]-'0' : 0;

            curr += c;

            

            c = curr >= 2;

            curr %= 2;

            

            ans = to_string(curr) + ans;

        }

        

        return c ? "1" + ans : ans;

    }

};
