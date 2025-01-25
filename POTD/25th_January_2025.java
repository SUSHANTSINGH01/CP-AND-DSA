class Solution {
    public static Node findFirstNode(Node head) {
        // code here
        
        Node slow = head;
        Node fast = head;
        
        while(fast.next!=null && fast.next.next!=null){
            slow = slow.next;
            fast = fast.next.next;
            
            if(slow==fast)
            break;
        }
        
        if(slow!=fast)
        return null;
        
        slow=head;
        
        while(slow!=fast){
            slow=slow.next;
            fast=fast.next;
        }
        
        return slow;
        
        
    }
}
