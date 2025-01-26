class Solution {
    // Function to remove a loop in the linked list.
    public static void removeLoop(Node head) {
        // code here
        
        Map<Node,Integer> mp = new HashMap<>();
        
        while(head.next!=null){
            if(mp.containsKey(head.next)){
                head.next=null;
                break;
            }
            mp.put(head,1);
            head=head.next;
            
        }
    }
}
