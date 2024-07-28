class Solution {
  public:

    string removeDups(string str) {
        // Your code goes here
        int arr[26]={0};
        string res="";
        int n=str.size();
        for(int i=0;i<n;i++){
            if(arr[str[i]-'a']==0){
                res+=str[i];
                arr[str[i]-'a']++;
            }
        }
        return res;
    }
};
