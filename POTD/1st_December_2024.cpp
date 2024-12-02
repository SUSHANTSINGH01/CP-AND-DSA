
class Solution {
  public:
    // Function to find the first non-repeating character in a string.
    char nonRepeatingChar(string &s) {
        // Your code here
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++){
           mp[s[i]]++;
        }
        for(int i=0;i<s.length();i++){
            if(mp[s[i]]==1){
                return s[i];
            }
        }
        return '$';
    }
};
