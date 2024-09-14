class Solution {
  public:

    void rearrange(vector<int> &arr) {
        // code here
        
        int n=arr.size();
        vector<int>pos;
        vector<int>neg;
        
        for(int i=0;i<n;i++)
        if(arr[i]>=0)
        pos.push_back(arr[i]);
        else
        neg.push_back(arr[i]);
        
        int j=0;
        int k=0;
        for(int i=0;i<n;i++)
        if(i%2==0){
            
            if(j<pos.size())
            arr[i]=pos[j++];
            else
            arr[i]=neg[k++];
        }
        
        else{
            
            if(k<neg.size()) 
            arr[i]=neg[k++];
            else
            arr[i]=pos[j++];
        }
        return ;
    }
};
