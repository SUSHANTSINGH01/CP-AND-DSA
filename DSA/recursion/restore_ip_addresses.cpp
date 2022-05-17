class Solution {
public:
    int generateNum(string S,int i,int j)
    {
        int res=0;

        for(int index=i;index<j;index++)
        res=res*10+S[index]-'0';

        return res;
    }

    bool isValid(string S)
    {
        int n=S.length();   
        int i=0;
        while(i<n)
        {
            int j=i;
            while(j<n && S[j]!='.')
            j++;

            if(j-i>3 || j-i==0)
            return false;

            int num = generateNum(S,i,j);

            if(num>255)
            return false;

            if(j-i>1 && (num==0 || S[i]=='0'))
            return false;

            i=j+1;
        }
        return true; 
    }

    string generateString(string A,int i,int j,int k)
    {
        string S;
        for(int index=0;index<A.length();index++)
        {
            S=S+A[index];

            if(index==i || index==j || index==k)
            S=S+'.';   

        }
        return S;
    }
    vector<string> restoreIpAddresses(string s) 
    {
     
        int n=s.length();
        vector<string>res;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                for(int k=j+1;k<n-1;k++)
                {
                    string S = generateString(s,i,j,k);

                    if(isValid(S))
                    res.push_back(S);
                }
            }
        }

        return res;
    }
};
