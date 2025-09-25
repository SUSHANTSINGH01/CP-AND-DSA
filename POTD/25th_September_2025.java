class Solution {
    public ArrayList<String> generateBinary(int n) {
        // code here
        ArrayList<String> res = new ArrayList<>();
        for(int i=1;i<=n;i++){
            int temp = i;
            StringBuilder str = new StringBuilder();
            while(temp>0){
                if(temp%2==1){
                    str.append('1');
                }else
                str.append('0');
                temp/=2;
            }
            str.reverse();
            res.add(str.toString());
        }
        return res;
    }
}
