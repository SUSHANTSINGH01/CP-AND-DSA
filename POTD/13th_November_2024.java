class Intersect {
    // Function to find intersection point in Y shaped Linked Lists.
    int intersectPoint(Node head1, Node head2) {
        // code here
        
         while(head1!=null){
             head1.data+=(-10000000);
             head1=head1.next;
         }
         
         while(head2!=null){
             if(head2.data<-1000000) 
             return head2.data+10000000;
             head2=head2.next;
         }
         
         return -1;
    }
}
