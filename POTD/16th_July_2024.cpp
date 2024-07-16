class Solution {
  public:

    string printString(string s, char ch, int count) {
        // Your code goes here
        int n=s.length();
        string res="";
        for(int i=0;i<n;i++){
            if(count==0)
            res+=s[i];
            else if(count>0 && s[i]==ch)
            count--;
        }
        return res;
    }
};
