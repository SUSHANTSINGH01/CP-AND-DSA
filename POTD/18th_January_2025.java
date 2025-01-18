class Solution {
    Node reverseList(Node head) {
        // code here
        Node curr = head;
        Node prev = null;
        Node nextN = head;
        while(nextN!=null){
            nextN=curr.next;
            curr.next = prev;
            prev = curr;
            curr = nextN;
        }
        return prev;
    }
}
