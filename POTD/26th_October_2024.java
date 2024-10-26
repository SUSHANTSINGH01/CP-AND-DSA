class Solution {
    public static int count(Node head, int key) {
        // code here
        int c=0;
        while(head!=null){
            if(head.data==key)
            c++;
            head=head.next;
        }
        return c;
    }
}
