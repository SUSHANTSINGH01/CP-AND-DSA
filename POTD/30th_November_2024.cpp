class Solution {
  public:
    // Function is to check whether two strings are anagram of each other or not.
    bool areAnagrams(string& s1, string& s2) {
        // Your code here
        int arr[26];
        int arr1[26];
        
        for(int i=0;i<26;i++)
        arr[i]=0,
        arr1[i]=0;
        
        for(int i=0;i<s1.size();i++)
        arr[s1[i]-'a']++;
        
        for(int i=0;i<s2.size();i++)
        arr1[s2[i]-'a']++;
        
        for(int i=0;i<26;i++)
        if(arr[i]!=arr1[i])
        return 0;
        
        return 1;
    }
};
