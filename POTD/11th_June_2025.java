class Solution {
    public int findLength(int[] color, int[] radius) {
        // code here
        
        Stack<Integer> st = new Stack<>();
        int n=color.length;
        
        for(int i=0;i<n;i++){
            if(!st.isEmpty() && color[i]==color[st.peek()] && radius[i]==radius[st.peek()]){
                st.pop();
            }else{
                st.push(i);
            }
        }
        
        return st.size();
    }
}
