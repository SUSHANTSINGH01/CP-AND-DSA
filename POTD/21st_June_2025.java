class Solution {
    public int catchThieves(char[] arr, int k) {
        // code here
        int n=arr.length;
        int res=0;
        int i=0;
        int j=0;
        
        while(i<n && j<n){
            if(arr[i]=='T' && arr[j] == 'P'){
                if(Math.abs(i-j)<=k){
                    i++;
                    j++;
                    res++;
                }
                else if(i<j)
                i++;
                else
                j++;;
                
            }else{
                while(i<n && arr[i]=='P')
                i++;
                
                while(j<n && arr[j] == 'T')
                j++;
            }
        }
        return res;
    }
}
