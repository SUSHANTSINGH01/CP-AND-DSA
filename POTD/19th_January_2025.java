class Solution {
    public Node rotate(Node head, int k) {
        // add code here
        
        Node st=head;
        int s=1;
        while(st.next!=null){
            st=st.next;
            s++;
        }
        st.next=head;
        k%=s;
        while(k>=1){
            st=st.next;
            k--;
        }
        Node newHead=st.next;
        st.next=null;
        return newHead;
    }
}
