class Solution {
    public static Node reverseKGroup(Node head, int k) {
        // code here
        
        int c=0;
        Node prev=null;
        Node curr=head;

        while(curr!=null && c<k)
        {
            Node temp=curr.next;
            curr.next=prev;
            prev=curr;
            curr=temp;
            c++;
        }
        
        if(curr!=null)
        head.next=reverseKGroup(curr,k);
        
        return prev;
    }
}
