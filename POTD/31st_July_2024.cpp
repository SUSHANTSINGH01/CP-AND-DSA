class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        // your code here
        int n=arr[0].size();
        int m=arr.size();
        string str=arr[0];
        string res;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            char ch=str[i];
            for(int j=1;j<m;j++)
            {
                if(arr[j].size()<=i || arr[j][i]!=ch)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1 && res.size()==0)
            return "-1";
            if(flag==1)
            return res;
            res+=ch;
        }
        return res;
    }
};
