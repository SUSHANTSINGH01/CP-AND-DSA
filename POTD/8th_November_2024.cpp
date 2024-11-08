class Solution {
  public:
    int minRepeats(string& s1, string& s2) {
        // code here
        int res=1;
        string s3=s1;
        
        while(s1.size()<s2.size()){
            s1+=s3;
            res++;
        }
        if(s1.find(s2)!=string::npos)
        return res;
        else
        s1+=s3;
        
        res+=1;
       
        return (s1.find(s2)!= string::npos)?res:-1;
    }
};
