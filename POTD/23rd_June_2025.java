class Solution {
    String minSum(int[] arr) {
        // code here
        int n=arr.length;
        StringBuilder res = new StringBuilder();
         
        Arrays.sort(arr);
        String str1="";
        String str2="";
        
        int i=0;
        while(i<n && arr[i]==0){
            i++;
        }
        
        int j=n-1;
        int sum=0;
        int carry=0;
        
        while(j>i) {
            sum=arr[j]+arr[j-1]+carry;
            res.append(sum%10);
            carry=sum/10;
            j=j-2;
        }
        
        if(j==i){
            sum=arr[i]+carry;
            res.append(sum%10);
            carry=sum/10;
        }
        
        if(carry>0)
        res.append(carry);
        
        res.reverse();
        return res.toString();
 
    }
}
