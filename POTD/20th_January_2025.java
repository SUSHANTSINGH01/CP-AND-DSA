class Solution {
    Node sortedMerge(Node head1, Node head2) {
        // code here
        Node res = new Node(0);
        Node head = res;
        
        while(head1!=null && head2!=null){
            if(head1.data<head2.data){
                res.next=head1;
                res=res.next;
                head1=head1.next;
            }else{
                res.next=head2;
                res=res.next;
                head2=head2.next;
            }
        }
        
        while(head1!=null){
            res.next=head1;
            res=res.next;
            head1=head1.next;
        }
        
        while(head2!=null){
            res.next=head2;
            res=res.next;
            head2=head2.next;
        }
        
        return head.next;
    }
}
