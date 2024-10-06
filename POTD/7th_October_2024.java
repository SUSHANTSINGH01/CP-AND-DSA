class Solution {
    // function should insert the data to the front of the list
    

    // function to print the linked list
    static Node insert(Node head, int data) {
        // Code Here.
        
        Node new_head=new Node(data);
        new_head.npx = head;
        head=new_head;
        return head;
        
    }

    // function to print the linked list
    static ArrayList<Integer> getList(Node head) {
        // Code Here.
        ArrayList<Integer> arr = new ArrayList<>();
        while(head!=null){
            arr.add(head.data);
            head=head.npx;
        }
        return arr;
    }
}
