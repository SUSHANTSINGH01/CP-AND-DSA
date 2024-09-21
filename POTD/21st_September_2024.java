class Solution {
    // Function to clone a linked list with next and random pointer.
    Node copyList(Node head) {
        // your code here
        
        Node start=head;
        Node list=new Node(0);
        Node list_head=list;
        HashMap<Node, Node>mp=new HashMap<>();
        
        while(head!=null)
        {
            Node temp=new Node(head.data);
            list.next=temp;
            list=list.next;
            
            mp.put(head,temp);
            head=head.next;
        }
        
        head=start;
        Node random_list=list_head.next;
        Node new_head=random_list;
        
        while(head!=null)
        {
            random_list.random=mp.get(head.random);
            random_list=random_list.next;
            head=head.next;
        }
        
        return new_head;
    }
}
