class Solution {
    public Node sortedInsert(Node head, int x) {
        // add your code here
        Node newHead=head;
        if(head.data>x){
            newHead=new Node(x);
            newHead.next=head;
            return newHead;
        }
        while(head.next!=null && head.next.data<x){
            head=head.next;
        }
        Node temp=head.next;
        head.next=new Node(x);
        head=head.next;
        head.next=temp;
        return newHead;
    }
}
