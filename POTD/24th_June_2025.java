class Solution {
    public static String maxSubseq(String s, int k) {
        // code here
        int n=s.length();
        Stack<Character>st=new Stack<>();
        String res="";
        
        for(int i=0;i<n;i++){
           
            while(!st.isEmpty() && st.peek()<s.charAt(i) && k>0){
                st.pop();
                k--;
            }
            
            st.push(s.charAt(i));
        }
        
        while(k>0){
            st.pop();
            k--;
        }
        
        while(!st.isEmpty()){
            res=st.pop()+res;
        }
        
        return res;
    }
}
