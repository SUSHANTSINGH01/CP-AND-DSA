class Solution {
    public Node cloneLinkedList(Node head) {
        // code here
        HashMap<Node, Node>mp=new HashMap<>();
        Node st=head;
        Node head0=new Node(0);
        Node head1=head0;
        while(head!=null)
        {
            Node temp=new Node(head.data);
            head0.next=temp;
            head0=head0.next;
            mp.put(head,temp);
            head=head.next;
        }
        head=st;
        Node randomHead=head1.next;
        Node newHead=randomHead;
        while(head!=null)
        {
            randomHead.random=mp.get(head.random);
            randomHead=randomHead.next;
            head=head.next;
        }
        return newHead;
    }
}
