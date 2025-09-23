class Solution {
    public void reverseQueue(Queue<Integer> q) {
        // code here
        Stack<Integer> st = new Stack<>();
        int n = q.size();
        
        for(int i=0;i<n;i++){
            st.push(q.poll());
        }
        
        while(!st.isEmpty()){
            q.add(st.pop());
        }
    }
}
