class Solution {
  public:
    string minSum(vector<int> &arr) {
        // code here
        
        string str1="";
        string str2="";
        string str="";
        int n=arr.size();
        
        int count[10]={0};
        
        for(int i=0;i<10;i++)
        count[i]=0;
        
        for(int i=0;i<n;i++){
            count[arr[i]]++;
        }
        
        int f=0;
        
        for(int i=0;i<10;i++){
            while(count[i]){
                if(f==0){
                    str1+=to_string(i);
                    f=1;
                }else{
                    str2+=to_string(i);
                    f=0;
                }
                count[i]--;
            }
        }
    
        int carry=0;
        
        int i=str1.size()-1;
        int j=str2.size()-1;
        
        //cout<<str1<<" "<<str2<<endl;
       while(i>=0 && j>=0){
            int temp=(str1[i--]-'0') + (str2[j--]-'0');
            str+=to_string((temp+carry)%10);
            carry=(temp+carry)/10;
        }
        
       // cout<<str<<endl;
        
            while(j>=0){
                int temp=str2[j--]-'0';
                str+=to_string((temp+carry)%10);
                carry=(temp+carry)/10;
            }
       
            while(i>=0){
                int temp=str1[i--]-'0';
                str+=to_string((temp+carry)%10);
                carry=(temp+carry)/10;
            }
        
        if(carry>0){
            str+=to_string(carry);
        }
        
        reverse(str.begin(),str.end());
        
        string res="";
        int k=0;
        while(str[k]=='0' && k<str.size()){
            k++;
        }
        
        while(k<str.size()){
            res+=str[k];
            k++;
        }
        
        
        return res;
        
        
    }
};
