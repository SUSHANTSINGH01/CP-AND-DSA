class Solution {
    public Node reverse(Node head) {
        // code here
        Node root = head;
        Node prev = null;
        
        while(head!=null){
            root = head.next;
            head.next = prev;
            prev = head;
            head = root;
        }

        return prev;
    }
}
