class Solution {
  public:
    vector<int> search(string& pat, string& txt) {
        // code here
            vector<int>vec;
            
            int m=pat.size();
            int n=txt.size();
            int arr[m];
            arr[0]=0; 
            
            
            int i=1;
            int j=0; 
            int k=0;
            int l=0;
            
            while(i<m) {
                if (pat[i]==pat[j]) {
                    j++;
                    arr[i]=j;
                    i++;
                }
                else{
                   if(j!=0) 
                   j=arr[j-1];
                   
                    else{
                        arr[i]=0;
                        i++;
                    }
                }
            }
            
            
            while (k<n) {
                if(pat[l]==txt[k]) {
                    k++;
                    l++;
                }
          
                if (l==m) {
                    vec.push_back(k-l);
                    l=arr[l-1];
                }
                
                else if(k<n && pat[l]!=txt[k]) {
                    if(l!=0)
                    l=arr[l-1];
                    else
                    k=k+1;
                }
            }
            
            return vec;
    }
}
