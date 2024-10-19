class Solution {
  public:
    string roundToNearest(string str) {
        // Complete the function
        int n=str.size()-2;
        if(str[str.size()-1]<'6'){
            str[str.size()-1]='0';
            return str;
        }else{
            string res="0";
            while(n>=0 && str[n]=='9'){
                res+="0";
                n--;
            }
            
            if(n>=0){
                int temp=str[n]-'0';
                n--;
                temp+=1;
                res+=to_string(temp);
            }else
            res+='1';
            
            while(n>=0){
                res+=str[n];
                n--;
            }
            
            n=res.size();
            for (int i=0;i<n/2;i++){
                swap(res[i],res[n-i-1]);
            }

            return res;
        }
        return "";
    }
};
