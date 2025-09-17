class Solution {
    static String decodeString(String s) {
        // code here
        Stack<Character> st = new Stack<>();
        int n = s.length();
        
        for(int i=0;i<n;i++){
            if(s.charAt(i)==']'){
                
                String temp = "";
                
                while(!st.isEmpty() && st.peek()!='[')
                temp=st.pop()+temp;
                
                st.pop();
                String intStr = "";
               
                while(!st.isEmpty() && st.peek()>='0' && st.peek()<='9') 
                intStr=st.pop()+intStr;
                
                int num=Integer.valueOf(intStr);
                
                String temp1 = "";
                
                for(int j=0;j<num;j++)
                temp1+=temp;
                
                for(char c : temp1.toCharArray())
                st.push(c);
                
            }else{
                st.push(s.charAt(i));
            }
        }
        
        String res = "";
        
        while(!st.isEmpty()) 
        res=st.pop()+res;
        
        
        return res;
    }
}
