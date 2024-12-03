class Solution {
  public:
    int minChar(string& s) {
        // Write your code here
        int i=1;
        int ind=0;
        string str=s;
        reverse(s.begin(),s.end());
        str+="$"+s;
        int n=str.size();
        vector<int>lps(n);
        lps[0]=0;
        
        while(i<n){
            if(str[i]==str[ind]){
                ind++;
                lps[i]=ind;
                i++;
            }
            else{
                if(ind==0){
                    lps[i]=0;
                    i++;
                }
                else
                ind=lps[ind-1];
            }
        }
        return (n/2)-lps[n-1];
    }
};
