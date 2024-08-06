class Solution {
  public:
    int isValid(string str) {
        // code here
        int c=0;
        int n=str.size();
        int i=0;
        string temp="";
        while(i<n){
            temp="";
            while(i<n && str[i]!='.'){
                temp+=str[i];
                i++;
            }
            
            if(temp.size()==0 || (temp.size()>1 && temp[0]=='0') || stoi(temp)>255)
            return 0;
            
            c++;
            i++;
        }
        
        if(c==4)
        return 1;
        
        return 0;
        
    }
};
