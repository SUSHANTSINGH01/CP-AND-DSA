class Solution {
    public ArrayList<String> binstr(int n) {
        // code here
        int n1 = 1<<n;
        ArrayList<String> res = new ArrayList<>();
        
        for(int i=0;i<n1;i++){
            StringBuilder str = new StringBuilder();
            for(int j=n-1;j>=0;j--){
                if((i&(1<<j))!=0)
                str.append("1");
                else
                str.append("0");
            }
            res.add(str.toString());
        }
        return res;
    }
}
