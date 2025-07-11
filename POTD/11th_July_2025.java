class Solution {
    public int countConsec(int n) {
        // code here
        
        int a=1;
        int b=2;
        
        for(int i=2;i<=n;i++){
            int temp=b;
            b=a+b;
            a=temp;
            
        }
        
        double res=Math.pow(2,n)-b;
        return (int)res;
    }
}
