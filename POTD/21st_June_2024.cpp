//{ Driver Code Starts

#include <iostream>
#include <regex>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string compareFrac(string str) {

        // Code here
        
        int dom1=0;
        int num1=0;
        int dom2=0;
        int num2=0;
        
        int i=0;
        string temp="";
        
        while(str[i]!='/'){
            temp+=str[i];
            i++;
        }
        
        i++;
        dom1=stol(temp);
        temp="";
        
        while(str[i]!=','){
            temp+=str[i];
            i++;
        }
        
        i++;
        num1=stol(temp);
        temp="";
        i++;
        
        while(str[i]!='/'){
            temp+=str[i];
            i++;
        }
        
        i++;
        dom2=stol(temp);
        temp="";
        
        while(i<str.size()){
            temp+=str[i];
            i++;
        }
        
        num2=stol(temp);
        
        double res1=(dom1*1.0/num1*1.0);
        double res2=(dom2*1.0/num2*1.0);
        
        int j=0;
        string str1="";
        while(str[j]!=','){
            str1+=str[j];
            j++;
        }
        
        j+=2;
        string str2="";
        while(j<str.size()){
            str2+=str[j];
            j++;
        }
        if(res1==res2)
        return "equal";
        
        return res1>res2?str1:str2;
    }
};


//{ Driver Code Starts.

int main() {
    Solution ob;
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) {

        string str;
        getline(cin, str);

        cout << ob.compareFrac(str) << endl;
    }
    return 0;
}

// } Driver Code Ends
