class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
        // code here
        
        string res="";
        string temp_str="";
        int n=str.size();
        for(int i=n-1;i>=0;i--){
            if(str[i]=='.')
            {
                reverse(temp_str.begin(),temp_str.end());
                res+=temp_str;
                res+=".";
                temp_str="";
            }
            else
            temp_str+=str[i];
        }
        
        reverse(temp_str.begin(),temp_str.end());
        res+=temp_str;
        return res;
    }
};
