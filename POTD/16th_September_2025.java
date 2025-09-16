class Solution {
    public int evaluatePostfix(String[] arr) {
        // code here
        Stack<Integer> st = new Stack<>();
        int i = 0;
        int n = arr.length;
        int res = 0;
        
        while(i<n){
             
            if(arr[i].equals("*") || arr[i].equals("-") || arr[i].equals("+") || arr[i].equals("/")
            || arr[i].equals("^")){
                int f = st.pop();
                int s = st.pop();
                
                if(arr[i].equals("*"))
                res=f*s;
                else if(arr[i].equals("-"))
                res=(s-f);
                else if(arr[i].equals("+"))
                res=(f+s);
                else if(arr[i].equals("/"))
                res=(int)Math.floor(s*1.0/f*1.0);
                else
                res=(int)Math.pow(s,f);
                st.push(res);
                
            }else{
                st.push(Integer.parseInt(arr[i]));
            }
            i++;
        }
        return res;   
    }
}
